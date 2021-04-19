#include <iostream>
using namespace std;
int re,a,b,n,s;
int introducir()
{
	do{
		cout<<"introducir numero: ";
		cin>>n;
	}while(n<=0);
	return n;
}
void suma(int &a, int &b)
{
	s=a+b;
}
int resta(int &a,int&b)
{
	re=a-b;
	return re;
}
int main()
{
	a=introducir();
	b=introducir();
	suma(a,b);
	cout<<"\nSuma: "<<s;
	cout<<"\nResta: "<<resta(a,b);
	return 0;
}
