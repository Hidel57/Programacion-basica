/*
	Programa que genere un problema de multiplicar para que el usuario introdusca la respuesta, el programa debe mostrar un mensaje si el usuario puso la respuesta correcta o no
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int a,b,c,r,s,p;
int main()
{
	srand(time(NULL));
	do{
		a=rand()%9+1;
		b=rand()%9+1;
		c=a*b;
		cout<<"Introducir respuesta: ";
		cout<<"\n"<<a<<" * "<<b<<" = ";
		cin>>r;
		if(r==c)
			cout<<"respuesta correcta";
		else
			{
			cout<<"respuesta incorrecta";
			cout<<"\nla correcta es: "<<c;
			}
		cout<<"\ndesea realizar otra multiplicacion? 1=si 0=no: ";
		cin>>p;
		cout<<"\n";
	}while(p==1);
	return 0;
}

