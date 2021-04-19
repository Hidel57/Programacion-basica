/*
	Buscar numeros primos de cierta cantidad de numeros
*/

#include <iostream>
using namespace std;
int li,ls,cd;
int main(int argc, char *argv[]) {
	cout<<"Introducir linf lsup: ";
	cin>>li>>ls;
	for(int n=li;n<=ls;n++){
		cd=0;
		for(int d=1;d<=n;d++){
			if(n%d==0){
				cd++;
			}
		}
		if(cd==2){
			cout<<n<<" es Primo "<<endl;
		}
	}
	return 0;
}

