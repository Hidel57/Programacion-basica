/*
	Calcular factorial de un numero por la suma sucesivas
*/
#include <iostream>
using namespace std;
int ct,ct2,s,f,n;
int main(int argc, char *argv[]) {
	ct=0;ct2=0;s=0;f=1;
	cout<<"Calcular el factorial de un numero por sumas sucesivas\n";
	cout<<"Introducir Numero: ";
	cin>>n;
	
	do{
		ct=0;
		do{
			s=s+f;
			ct=ct+1;
		} while(ct<ct2);
		f=s;
		ct2=ct2+1;
	} while(ct2<n);
	cout<<"factorial: "<<f;
	return 0;
}

