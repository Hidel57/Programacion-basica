/*
	Convertir cordenadasPolares
*/

#include <iostream>
#include <math.h>
using namespace std;
void leer(float &rho, float &th)
{
	cout<<"\nintr coordenadas polares: ";
	cin>>rho>>th;
}
void convertir(float rho, float th,float &x, float &y)
{
	x=rho*cos(th);
	y=rho*sin(th);
}
void mostrar(float x, float y)
{
	cout<<"\ncorrdenadas polares: "<<"("<<x<<","<<y<<")";
}
int main()
{
	float rho,th,x,y;
	leer(rho,th);
	convertir(rho,th,x,y);
	mostrar(x,y);
	return 0;
}
