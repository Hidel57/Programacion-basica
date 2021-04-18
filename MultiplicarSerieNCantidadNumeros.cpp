/*
	Obtener el resultado de multiplicar n cantidad de numeros intrducido por el usuario de acuerdo a la siguiete serie: (-1)*(-3)*(-7)*(-10)...
*/

#include <iostream>
using namespace std;
int n,c,ct,sum;
int leer()
{
	cout<<"Multiplicar la cantidad de numeros negativos de acuerdo a la siguiente serie:";
	cout<<"\n(-1)*(-3)*(-7)*(-10)... )";
	cout<<"\n\nIntroducir cantidad de numeros: ";
	cin>>n;
	return n;
}
int serie(int c,int n)
{
	ct=ct+1;
	if(ct==n)
	{
		cout<<"("<<c<<") = ";
		return c;
	}
	else
		{
			cout<<"("<<c<<")*";
			return(c*serie(c-3,n));
		}
}
void imprimir(int sum)
{
	cout<<"\nEl resultado es: "<<sum;
}
int main(int argc, char *argv[])
{
	c=-1;
	n=leer();
	cout<<"\n";
	sum=serie(c,n);
	imprimir(sum);
	return 0;
}

