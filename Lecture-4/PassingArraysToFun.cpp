// PassingArraysToFun
#include <iostream>
using namespace std;

void PrintArray(int arr[],int n){
	swap(arr[0],arr[5]);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}

	cout<<endl;
}

int SumOfArray(int a[],int n){
	int sum = 0;

	for(int i=0;i<n;i++){
		sum += a[i];
	}
	return sum;
}

int main(){

	int a[]={1,2,3,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(int);

	PrintArray(a,n);
	cout<<SumOfArray(a,n)<<endl;

	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}

	cout<<endl;
	return 0;
}