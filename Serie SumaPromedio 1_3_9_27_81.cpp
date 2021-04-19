/*
	Obtener la Suma y promedio de la serie 1 3 9 27 81...
*/

#include <iostream>
using namespace std;
int n,c,ct,sum;
float p;
int leer()
{
	cout<<"introducir cant de numero: ";
	cin>>n;
	return n;
}
int serie(int c,int n)
{
	ct=ct+1;
	if(ct==n)
	{
		cout<<" "<<c<<"= ";
		return c;
	}
	else
		{
			cout<<" "<<c;
			return(c+serie(c*3,n));
		}
}
void imprimir(int sum,float p)
{
	cout<<"\nla suma es: "<<sum;
	cout<<"\nel promedio es: "<<p;
}
int main(int argc, char *argv[])
{
	c=1;
	n=leer();
	sum=serie(c,n);
	p=sum/ct;
	imprimir(sum,p);
	return 0;
}



