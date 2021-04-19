/*
	Obtener las sumas diagonales de una matris con valores generados aleatoriamente
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
const int lim=10;
int mat[lim][lim];

void llenar(int mat[][lim],int lim){
	srand(time(NULL));
	for(int i=0;i<lim;i++){
		for(int j=0;j<lim;j++){
			mat[i][j]=rand()%90+10;
		}
	}
}

void mostrar(int mat[][lim],int lim){
	for(int i=0;i<lim;i++){
		for(int j=0;j<lim;j++){
			cout<<mat[i][j]<<"  ";
		}
		cout<<endl;
	}
}

int sumar1(int mat[][lim],int lim){
	int sum;
	for(int i=0;i<lim;i++){
		cout<<mat[i][i]<<"+ ";
		sum=sum+mat[i][i];
	}
	return sum;
}

int sumar2(int mat[][lim],int lim){
	int sum;
	for(int i=0;i<lim;i++){
		cout<<mat[i][lim-1-i]<<"+ ";
		sum=sum+mat[i][lim-1-i];
	}
	return sum;
}

int main(int argc, char *argv[]) {
	int s1,s2;
	llenar(mat,lim);
	mostrar(mat,lim);
	cout<<endl;
	s1=sumar1(mat,lim);
	cout<<"  =>   "<<s1;
	cout<<endl;
	s2=sumar2(mat,lim);
	cout<<"  =>   "<<s2;
	return 0;
}
