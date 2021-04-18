/*
	Contar la cantidad de numeros positivos de un vector con numeros introducidos por el usuario
*/

#include <iostream>
using namespace std;
const int lim=5;
int n[lim];
int i,ct;
void leer(int n[],int lim)
{
	cout<<"introducir 5 elementos: ";
	for(i=0;i<lim;i++)
	{
		cout<<"\nnum["<<i<<"]=";
		do{
			cin>>n[i];
		}while(n[i]<-99||n[i]>99);
	}
}
void positivos(int n[], int lim,int &ct)
{
	for(i=0;i<lim;i++)
	{
		if(n[i]>0)
			ct=ct+1;
	}
}
void mostrar(int n[], int ct)
{
	cout<<"\n"<<ct<<" numeros positivos";
}
int main()
{
	leer(n,lim);
	positivos(n,lim,ct);
	mostrar(n,ct);	
	return 0;
}
