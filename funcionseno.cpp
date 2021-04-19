#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

#define ESC   27
#define PI 3.14159265

using namespace std;
int x=1;int y=50;

void gotoxy(int x, int y){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Pos;
	Pos.X=x;
	Pos.Y=y;
	SetConsoleCursorPosition(hCon,Pos);
}

int LetraSi[7][7]={{0,0,0,0,0,0,2},{0,0,1,1,1,1,2},{0,1,0,0,0,0,2},{0,0,1,1,1,0,2},{0,0,0,0,0,1,2},{0,1,1,1,1,0,2},{0,0,0,0,0,0,0}};
int LetraA[6][7]={{0,0,0,0,0,0,2},{0,0,1,1,1,0,2},{0,1,0,0,0,1,2},{0,1,1,1,1,1,2},{0,1,0,0,0,1,2},{0,0,0,0,0,0,0}};
int LetraS[6][7]={{0,0,0,0,0,0,2},{0,0,1,1,1,0,2},{0,1,0,0,0,1,2},{0,1,1,1,1,1,2},{0,1,0,0,0,1,2},{0,0,0,0,0,0,0}};
int Letra1[6][7]={{0,0,0,0,0,0,2},{0,0,1,1,1,0,2},{0,1,0,0,0,1,2},{0,1,1,1,1,1,2},{0,1,0,0,0,1,2},{0,0,0,0,0,0,0}};
int Letra2[6][7]={{0,0,0,0,0,0,2},{0,0,1,1,1,0,2},{0,1,0,0,0,1,2},{0,1,1,1,1,1,2},{0,1,0,0,0,1,2},{0,0,0,0,0,0,0}};
void matrizSi(){	
	int filas = (sizeof(LetraSi)/sizeof(LetraSi[0]));
	int columnas = (sizeof(LetraSi[0])/sizeof(LetraSi[0][0]));
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if(LetraSi[i][j]==1)cout<<"*";
			if(LetraSi[i][j]==0) cout<<" ";
			if(LetraSi[i][j]==2)	{cout<<endl;for(int k=0;k<x-1;k++){cout<<" ";}};
		}
	}
}

void matrizA(){	
	int filas = (sizeof(LetraA)/sizeof(LetraA[0]));
	int columnas = (sizeof(LetraA[0])/sizeof(LetraA[0][0]));
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if(LetraA[i][j]==1)cout<<"*";
			if(LetraA[i][j]==0) cout<<" ";
			if(LetraA[i][j]==2)	{cout<<endl;for(int k=0;k<x-1;k++){cout<<" ";}};
		}
	}
}

int main(int argc, char *argv[]) {
	char tecla;
	while(tecla!= ESC){
		for(float i=0; i<=360; i+=5)
		{
			y = ceil(sin(i/180*PI)*20)/2;
			gotoxy(x, 12-y);
			matrizSi();
			system("pause");
			gotoxy(x, 12-y);
			matrizA();
			x++;
			Sleep(100);
		}
	}
	return 0;
}
