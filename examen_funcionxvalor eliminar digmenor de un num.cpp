/*
	Eliminar el digito menor de un numero introducido por el usuario
*/

#include <iostream>
using namespace std;
int a,d,nn,n,me;
int introducir()
{
	do{
	cout<<"Introducir numero: ";
	cin>>n;
	}while(n<100&&n>999);
	return n;
}
int menor(int n,int &nn)
{	
	me=10;
	int na=n;
	do{
		d=n%10;
		n=n/10;
		if(d<me){
			me=d;
		}
	}while(n!=0);
	int c=1;
	do{
		d=na%10;
		na=na/10;
		if(d!=me){
			nn=(d*c)+nn;
			c=c*10;
		}
	} while(na!=0);
	return nn;
}
void mostrar(int nn)
{
	cout<<"\nmenor: "<<nn;
}
int main()
{
	int nn=0;
	a=introducir();
	me=menor(a,nn);
	mostrar(nn);
	return 0;
}

