#include <iostream>
using namespace std;
int a,b,c,cd,d,x,r,y,ct;
int main()
{
	cout<<"intr numero primo: ";
	cin>>a;
	ct=0;b=a;c=a;
	do{
		cd=2;c=c+1;
		for(d=2;d<c;d++)
		{
			if(c%d==0)
				cd=cd+1;
		}
		if(cd==2)
			ct=1;
	}while(ct==0);
	do{
		cd=2;b=b-1;
		for(d=2;d<b;d++)
		{
			if(b%d==0)
				cd=cd+1;
		}
		if(cd==2)
			ct=0;
	}while(ct==1);
	r=(c+b)/2;
	cout<<"("<<c<<"+"<<b<<")/2= "<<r;
	if(r==a)
		cout<<"\n primo equilibrado";
	else
		cout<<"\n primo no equilibrado";
	return 0;
}
