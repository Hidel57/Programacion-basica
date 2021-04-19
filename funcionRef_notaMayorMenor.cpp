/*
	obtener la nota mayor y menor de alumnos de la unversidad introducidos por el usuario
*/

#include <iostream>
using namespace std;
void leer(int &n)
{
	do{
		cout<<"\nIntroducir cantidad de alumnos: ";
		cin>>n;
	}while(n<0);
}
void notas(int &c)
{
	do{
		cout<<"\nIntroducir notas de alumnos: ";
		cin>>c;
	}while(c<=0||c>100);
}
void alumnos(int n,int &me, int &ma)
{
	int c,ct;
	ma=0;me=100;ct=0;
	do{
		ct=ct+1;
		notas(c);
		if(c>ma)
			ma=c;
		if(c<me)
			me=c;
	}while(ct<n);
}
void mostrar(int ma,int me)
{
	cout<<"\nNota mayor: "<<ma;
	cout<<"\nNota menor: "<<me;
}
int main()
{
	int n,ma,me;
	leer(n);
	alumnos(n,me,ma);
	mostrar(ma,me);
	return 0;
}
