// ArraysAndPointers
#include <iostream>
using namespace std;

void PrintArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

void PrintArray1(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<' ';
		// cout<<a[i]<<' ';
	}
	cout<<endl;
}

int main(){
	int a[]={4,5,6,7,8};
	int n = sizeof(a)/sizeof(int);

	cout<<a<<endl;
	int *x = a;
	int *y = &a[0];
	cout<<x<<endl;
	cout<<y<<endl;
	PrintArray(a,n);
	PrintArray1(a,n);
	PrintArray1(a+1,n-1);

	return 0;
}