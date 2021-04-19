/*
	calcular el precio total de acuerdo a la distancia recorrida
*/

#include <iostream>
using namespace std;
int km,v,m;
int main(int argc, char *argv[]) {
	cout<<"introdicir km recorridos: ";
	cin>>km;
	if(km<300){
		m=1;
	}
	else{
		if(km>1000){
			m=3;
		}
		else{
			m=2;
		}
	}
	switch(m){
	case 1: v=30;break;
	case 2:	v=((km-300)*1.5)+30;break;
	case 3: v=((km-1000)*1)+(((km-300)*1.5)+30);break;
	}
	cout<<v;
	return 0;
}
