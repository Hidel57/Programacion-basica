/*
	Sumar la cantidad n introducido por el usuario de la siguiente serie: 2+3+5+8++12+17+23+30...
*/

#include <iostream>
using namespace std;
int n,c,ct,sum;
int leer()
{
	cout<<"introducir cantidad de numeros: ";
	cin>>n;
	return n;
}
int serie(int c,int n)
{
	ct=ct+1;
	if(ct==n)
	{
		cout<<c<<"= ";
		return c;
	}
	else
	{
		cout<<c<<"+";
		return(c+serie(c+ct,n));
	}
}
void imprimir(int sum)
{
	cout<<"\nla suma es: "<<sum;
}
int main(int argc, char *argv[])
{
	c=2;
	n=leer();
	sum=serie(c,n);
	imprimir(sum);
	return 0;
}

