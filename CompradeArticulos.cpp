/*
	Programa que calcule el total de la compra de articulos
*/

#include <iostream>
#include <string>
using namespace std;
int p,c,ta,s,opcion;

int main(){
	ta=1;s=0;
	cout<<"introdusca precio y cantidad: "<<endl;
	do{
		cout<<"precio: ";cin>>p;
		cout<<"cant: ";cin>>c;
		ta=p*c;
		s=s+ta;
	cout<<"seguir con la compra: si=1 no=0: ";
	cin>>opcion;
	}while(opcion!=0);
	cout<<"total monto a pagar: "<<s;
	return 0;
}
