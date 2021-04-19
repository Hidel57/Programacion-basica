/*
	sume de series de acuerdo a la siguiente formula d=d*5 d*a + d*a...
*/

#include <iostream>
using namespace std;
void leer(int &n,float &a)
{
		cout<<"\nIntroducir cantidad de numeros y valor de a: ";
		cin>>n>>a;
}
void sumaxwhile(int n,float a,float &s1)
{
	int d=2,ct=0;
	while(ct<n){
		ct++;
		d=d*5;
		s1=s1+(d*a);
		cout<<d*a<<" + ";
	}
}
void sumaxfor(int n,float a,float &s2)
{
	int d=2;
	for(int i=0;i<n;i++){
		d=d*5;
		s2=s2+(d*a);
		cout<<d*a<<" + ";
	}
}
void mostrar(float s1,float s2)
{
	cout<<"\nSuma x while: "<<s1;
	cout<<"\nSuma x for: "<<s2;
}
int main()
{
	int n;
	float a,s1,s2;
	s1=0;s2=0;
	leer(n,a);
	sumaxwhile(n,a,s1);
	cout<<endl;
	sumaxfor(n,a,s2);
	mostrar(s1,s2);
	return 0;
}

