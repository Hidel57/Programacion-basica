/*
	Numero Capicua, ejemplo: numero capicua de 12 es 12 + 21 = 33
*/

#include <iostream>
using namespace std;
int nn,n,a,b,ct;
int convertir(int n)
{
	int nn,a;nn=0;
	do{
		a=n%10;
		nn=(nn*10)+a;
		n=n/10;
	}while(n!=0);
	return nn;
}
int main(int argc, char *argv[])
{
	cout<<"Introducir numero: ";
	cin>>n;
	do{
		b=convertir(n);
		if(n==b)
		{
			cout<<"\nNumero Capicua es: "<<n;
			break;
		}
		else
		{
			cout<<"\n"<<n<<" + "<<b;
			n=n+b;
			cout<<" = "<<n;
		}
		ct=ct+1;
	}while(ct<=100);
	return 0;
}

