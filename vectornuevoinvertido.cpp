#include <iostream>
using namespace std;
const int lim=10;
int n[lim],m[lim];
int i,j;
void leer(int n[],int lim)
{
	cout<<"introducir 10 elementos:\n\n";
	for(int i=0;i<lim;i++)
	{
		cout<<"num["<<i<<"]=";
		do{
			cin>>n[i];
		}while(n[i]<0);
	}
}
void positivos(int n[], int lim)
{
	for(int j=0;j<lim;j++)
	{
			m[j]=n[i];
			i=i-1;
	}
}
void mostrar(int n[])
{
	cout<<"\ninvertido:\n";
	for(int j=0;j<lim;j++)
	{
		cout<<"\nnum["<<j<<"]="<<m[j];
	}
}

int main()
{
	leer(n,lim);
	i=9;
	positivos(n,lim);
	mostrar(n);	
	return 0;
}
