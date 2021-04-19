/*
	Obtener el numero medio de tres numeros introducidos por el usuario
*/

#include <iostream>
using namespace std;
int a,b,c,x,m;
int introducir()
{
	cout<<"* numero: ";
	cin>>x;
	return x;
}
int menor(int a,int b, int c)
{
	if((a<=b&&b<=c)||(c<=b&&b<=a))
		m=b;
	else
		if((a<=c&&c<=b)||(b<=c&&c<=a))
			m=c;
		else
			if((c<=a&&a<=b)||(b<=a&&a<=c))
				m=a;
	return m;
}
void mostrar(int m)
{
	cout<<"\nEl numero medio es: "<<m;
}
int main()
{
	cout<<"introducir 3 numeros:\n";
	a=introducir();
	b=introducir();
	c=introducir();
	m=menor(a,b,c);
	mostrar(m);
	return 0;
}

