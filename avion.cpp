#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
using namespace std;
void gotoxy(int x, int y){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(hCon,pos);
}
void ocultarCursor(){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize=50;
	cci.bVisible=FALSE;
	SetConsoleCursorInfo(hCon, &cci);
}
void pintar_limites(){
	for(int i=2 ; i<78; i++){
		gotoxy(i,3); printf("%c",205);
		gotoxy(i,33); printf("%c",205);
	}
	for(int i=4 ; i<33; i++){
		gotoxy(2,i); printf("%c",186);
		gotoxy(77,i); printf("%c",186);
	}
	gotoxy(2,3);printf("%c",201);
	gotoxy(2,33);printf("%c",200);
	gotoxy(77,3);printf("%c",187);
	gotoxy(77,33);printf("%c",188);
}

class NAVE{
	int x,y;
	int corazon;
	int vida;
public:
	NAVE(int _x, int _y,int _corazon,int _vida){
		x=_x;
		y=_y;
		corazon=_corazon;
		vida=_vida;
	}
	void pintar_nave(){
		gotoxy(x,y); printf ("  %c",30 );
		gotoxy(x,y+1); printf (" %c%c%c",40,207,41);
		gotoxy(x,y+2); printf ("%c%c %c%c",30,190,190,30);
	}
	void borrar_nave(){
		gotoxy(x,y); printf("     ");
		gotoxy(x,y+1); printf("     ");
		gotoxy(x,y+2); printf("     ");
	}
	void mover_nave(){
		if(kbhit()){
			borrar_nave();
			char tecla=getch();
			if(tecla==LEFT && x>3) x--;
			if(tecla==RIGHT && x+6<78) x++;
			if(tecla==UP && y>4) y--;
			if(tecla==DOWN && y+3 <33) y++;
			pintar_nave();
		}
	}
	void vidasycorazones(){
		gotoxy(50,2); printf("Vidas: %d",vida);
		gotoxy(64,2); printf("Salud");
		gotoxy(70,2); printf("      ");
		for(int i=0; i<corazon;i++){
			gotoxy(70+i,2); printf("%c",3);
		}
	}
	void explosion(){
		if(corazon==0){
			borrar_nave();
			gotoxy(x,y);   printf("  **  ");
			gotoxy(x,y+1); printf(" **** ");
			gotoxy(x,y+2); printf("  **  ");
			Sleep(200);
			borrar_nave();
			gotoxy(x,y);   printf("**  **");
			gotoxy(x,y+1); printf("  **  ");
			gotoxy(x,y+2); printf("**  **");
			Sleep(200);
			borrar_nave();
			pintar_nave();
			vida--;
			corazon=3;
		}
	}
};

class asteroides{
	int x,y;
public:
	asteroides(int _x, int _y){
		x=_x;
		y=_y;
	}
	void pintar_ast(){
		gotoxy(x,y); printf("%c",184);
	}
	void mover_ast(){
		gotoxy(x,y); printf(" ");
		y++;
		if(y>32){
			x=rand()%74+4;
			y=4;
		}
		pintar_ast();
	}
};
int main(int argc, char *argv[]) {
	ocultarCursor();
	pintar_limites();
	NAVE N(37,30,3,3);
	asteroides ast(7,4);
	N.vidasycorazones();
	N.pintar_nave();

	bool gameover=false;
	while(!gameover){
		N.mover_nave();
		ast.mover_ast();
		Sleep(40);
	}
	return 0;
}

