/*
	Crear un nuevo vector resultante del producto de dos vectores
*/

#include <iostream>
using namespace std;
const int lim=10;
int ct,ct2,sum,i,j,a[lim],b[lim],c[lim];
void vec1(int lim,int a[])
{
	for(int i=0;i<lim;i++)
	{
		ct=ct+1;
		a[i]=ct;
		cout<<"\nv["<<i<<"]= "<<a[i];
	}
}
void vec2(int lim,int b[])
{
	for(int j=0;j<lim;j++)
	{
		ct2=ct2+2;
		b[j]=ct2;
		cout<<"\nv["<<j<<"]= "<<b[j];
	}
}
void vec3(int lim,int c[])
{
	i=0;j=0;
	for(int k=0;k<lim;k++)
	{
		c[k]=a[i]*b[j];
			i=i+1;
			j=j+1;
		cout<<"\nv["<<k<<"]= "<<c[k];
	}
}	
int main(int argc, char *argv[])
{
	cout<<"Crear un nuevo vector resultante del producto de dos vectores:";
	vec1(lim,a);
	cout<<"\n";
	vec2(lim,b);
	cout<<"\n";
	vec3(lim,c);
	return 0;
}

