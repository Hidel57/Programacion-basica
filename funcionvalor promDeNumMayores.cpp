/*
	Obtener el prommedio de los dos numeros mas mayores de tres numeros introducidos por el usuario
*/

#include <iostream>
using namespace std;
int a,b,c,nn,n,p;
int introducir()
{
	do{
		cout<<"* numero: ";
		cin>>n;
	}while(n<0&&n>100);
	return n;
}
int promedio(int a, int b,int c,int &p)
{	
	if(a<b&&a<c){
		p=(b+c)/2;
	}
	else{
		if(b<a&&b<c){
			p=(a+c)/2;
		}
		else{
			if(c<b&&c<a){
				p=(b+a)/2;
			}
		}
	}
	return p;
}
void mostrar(int p,int a,int b,int c)
{
	cout<<a<<" "<<b<<" "<<c;
	cout<<"\npromedio: "<<p;
}
int main()
{
	cout<<"introducir 3 numeros:\n";
	a=introducir();
	b=introducir();
	c=introducir();
	p=promedio(a,b,c,p);
	mostrar(p,a,b,c);
	return 0;
}

