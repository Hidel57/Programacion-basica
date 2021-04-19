/*
	Desarrollo de la tabla de multiplicar hasta el 9
*/

#include <iostream>
using namespace std;
const int lim=9;
int vecx[lim];
int vecy[lim];
int vecr[lim];

void llenar(int vecx[],int vecy[],int lim){
	int i=0;
	do{
		vecx[i]=i+1;
		vecy[i]=i+1;
		i++;
	} while(i<lim);
}	

void Multiplicar(int vecx[],int vecy[],int vecr[],int lim){
	for(int i=0;i<lim;i++){
		for(int j=0;j<lim;j++){
		}
		
	}
}

void Mostrar(int vecx[],int vecy[],int vecr[],int lim){
	for(int i=0;i<lim;i++){
		for(int j=0;j<lim;j++){
			cout<<vecx[i]<<" * "<<vecy[j]<<" = "<<vecx[i]*vecy[j]<<endl;
		}
		cout<<endl;
	}
}

int main(int argc, char *argv[]) {
	llenar(vecx,vecy,lim);
	Multiplicar(vecx,vecy,vecr,lim);
	Mostrar(vecx,vecy,vecr,lim);
	
	return 0;
}

