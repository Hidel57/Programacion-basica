/*
	Obtener el producto de la serie -2 -4 -3 -5 -4 -6... de n cantidad de numeros
*/

#include <iostream>
using namespace std;
int c, d,p,n,band;
int main(int argc, char *argv[]) {
	d=-2;c=0;p=1;band=1;
	cout<<"Introducir cantidad: ";
	cin>>n;
	while(c<n){
		cout<<d<<" ",
		p=p*d;
		if(band==1){
			d=d-2;
			band=0;
		}
		else{
			d=d+1;
			band=1;
		}
		c=c+1;
	}
	
	cout<<"\nproducto es: "<<p;
	return 0;
}
