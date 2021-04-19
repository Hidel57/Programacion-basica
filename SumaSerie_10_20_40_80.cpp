/*
	Obtener la suma de la serie: 10 20 40 80 160..
*/

#include <iostream>
using namespace std;
int sem,n,ts,ct;
int main(int argc, char *argv[]) {
	sem=5;
	cout<<"introducir cantidad: ";
	cin>>n;
	do{
		sem=sem*2;
		ts=ts+sem;
		cout<<sem<<" ";
		ct++;
	} while(ct<n);
	cout<<"total: "<<ts;
	return 0;
	
}

