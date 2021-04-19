/*
	encontrar el numero mayor y el numero menor de un vector generado por numeros aleatorios
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int lim=10;
int n[lim];
int i,me,ma;
void leer(int n[],int lim)
{
	srand(time(NULL));
	for(i=0;i<lim;i++)
	{
		n[i]=rand()%400+100;
		cout<<"\nnum["<<i<<"]="<<n[i];
	}
}
void mayor_menor(int n[], int li,int &me,int &ma)
{
	for(i=0;i<lim;i++)
	{
		if(n[i]<me)
			me=n[i];
		if(n[i]>ma)
			ma=n[i];
	}
}
void mostrar(int n[], int me,int ma)
{
	cout<<"\n"<<ma<<" es menor";
	cout<<"\n"<<me<<" es mayor";
}
int main()
{
	me=500;ma=100;
	leer(n,lim);
	mayor_menor(n,lim,me,ma);
	mostrar(n,me,ma);	
	return 0;
}
