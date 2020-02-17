#include<iostream>
using namespace std;

void printNFibo(int n,int a,int b,int i){
	// Base case
	if(i==n){
		return;
	}
	// Recursive case
	int c = a + b;
	cout<<c<<' ';
	printNFibo(n,b,c,i+1);
}


int main(){
	int n;
	cin>>n;
	if(n>=2){
		cout<<0<<' '<<1<<' ';
		printNFibo(n-2,0,1,0);
		cout<<endl;
	}
	else{
		cout<<0<<endl;
	}



	return 0;
}