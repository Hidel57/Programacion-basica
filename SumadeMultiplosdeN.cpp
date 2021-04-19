/*
	Obtener la suma de los primeros 40 numeros multiplos de n, n introducido por el usuario
*/

#include <iostream>
using namespace std;
const int lim=40;
int vect[lim];

int Leer(){
	int n;
	cout<<"Introducir Num: ";
	cin>>n;
	return n;
}
void llenar(int vect[],int x,int lim){
	for(int i=0;i<lim;i++){
		vect[i]=(i+1)*x;
	}	
}

void mostrar(int vect[],int lim){
	for(int i=0;i<lim;i++){
		cout<<vect[i]<<" ";
	}	
}

int promedio(int lim){
	float prom;
	int sum=0;
	for(int i=0;i<lim;i++){
		sum=sum+vect[i];
	}	
	prom=sum/lim;
	return prom;
}

int pares(int lim){
	int ct=0;
	for(int i=0;i<lim;i++){
		if(vect[i]%2==0){
			ct++;
		}
	}	
	return ct;
}

int main(int argc, char *argv[]) {
	int x;
	x=Leer();
	llenar(vect,x,lim);
	mostrar(vect,lim);
	cout<<endl;
	
	cout<<"Promedio es: "<<promedio(lim);
	cout<<endl;
	cout<<"Num de pares: "<<pares(lim);
	return 0;
}

