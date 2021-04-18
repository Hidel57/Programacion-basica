#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n=5;
	int m=2*(n-2)+1;int x=1;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i-1;j++){
			cout<<" ";
		}
		cout<<"*";
		for(int j=1;j<=m;j++){
			cout<<" ";
		}
		if(i!=n){
			cout<<"*";
		}
		if(i!=1){
			for(int p=1;p<=x;p++){
				cout<<" ";
			}
			cout<<"*";
			x=x+2;
		}
		for(int j=1;j<=m;j++){
			cout<<" ";
		}
		if(i!=n){
		 cout<<"*"<<endl;
		} 
		m=m-2;
	}
	return 0;
}

