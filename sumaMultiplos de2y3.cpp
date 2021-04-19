/*
	Obtener la suma de los multiplos de 2 y 3 de una cantidad de numeros
*/


#include<iostream>
using namespace std;
float linf,lisp,suma,sum2,sum3;
int main()
{
		cout<<"Obtener la suma de los multiplos de 2 y 3 de una cantidad de numeros.\n";
		cout<<"Introducir limite inferior y limite superior de la cantidad: ";
		cin>>linf>>lisp;
		for(int i=linf;i<=lisp;i++)
		{
			if((i%2==0)&&(i%3==0))
			{
				suma=suma+i;
			}
			if(i%2==0) {
				cout<<i<<"\t";
				sum2=sum2+i;
			}
			if(i%3==0) {
				cout<<i<<"\n";
				sum3=sum3+i;
			}
		}
		cout<<"\nsuma de multiplos de 2 y 3: "<<suma<<endl;
		cout<<"suma de multiplos de 2: " <<sum2<<endl;
		cout<<"suma de multiplos de 3: "<<sum3<<endl;
return 0;
}
