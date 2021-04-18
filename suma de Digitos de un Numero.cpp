/*
	Suma de digitos de un numero
*/
#include <iostream>
using namespace std;
int n,c,ct,sum;
int leer()
{
	cout<<"introducir numero largo: ";
	cin>>n;
	return n;
}
int serie(int c,int n)
{
	c=n%10;
	n=n/10;
	if(n==0)
	{
		cout<<c<<" = ";
		return c;
	}
	else
		{
			cout<<c<<" + ";
			return(c+serie(c,n));
		}
}
void imprimir(int sum)
{
	cout<<"\nla suma de digitos es: "<<sum;
}
int main(int argc, char *argv[])
{
	n=leer();
	sum=serie(c,n);
	imprimir(sum);
	return 0;
}

