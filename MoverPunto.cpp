#include <iostream>
#include <windows.h>
#include <conio.h>
#define DOWN  72
#define LEFT  75
#define RIGHT 77
#define UP    80
using namespace std;
void gotoxy(int x, int y){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Pos;
	Pos.X=x;
	Pos.Y=y;
	SetConsoleCursorPosition(hCon,Pos);
}
void mover(int &x,int &y){
	if(kbhit()){
		char tecla=getch();
	/*	gotoxy(x,y);cout<<" ";*/
		if(tecla==LEFT) x--;
		if(tecla==RIGHT) x++;
		if(tecla==UP) y++;
		if(tecla==DOWN) y--;
		gotoxy(x,y);cout<<"*";
	}
}
int main(){
	int x=25;int y=16;
	gotoxy(x,y);
	bool game_over = false;
	while(!game_over){
		mover(x,y);
		Sleep(30);
	}
	return 0;
}
