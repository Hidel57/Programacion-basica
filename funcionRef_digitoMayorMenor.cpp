/*
	Obtener el digito mayor y menor de un numero mayor de 3 digitos introducido por el usuario
*/

#include <iostream>
using namespace std;
void leer(int &n)
{
	do{
		cout<<"\nIntroducir numero mayor de 3 digitos: ";
		cin>>n;
	}while(n<1000);
}
void digitos(int n,int &me, int &ma)
{
	int d;
	ma=0;me=100;
	do{
		d=n%10;
		n=n/10;
		if(d>ma)
			ma=d;
		if(d<me)
			me=d;
	}while(n!=0);
}
void mostrar(int ma,int me)
{
	cout<<"\nDigito Mayor: "<<ma;
	cout<<"\nDigito Menor: "<<me;
}
int main()
{
	int n,ma,me;
	leer(n);
	digitos(n,me,ma);
	mostrar(ma,me);
	return 0;
}

