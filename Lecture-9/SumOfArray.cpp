// SumOfArrays
#include <iostream>
using namespace std;

int SumOfArray(int *a,int n){
	// Base case
	if(n==0){
		return 0;
	}

	int ChoteArrayKaSum = SumOfArray(a+1,n-1);
	int BadaArraySum = a[0] + ChoteArrayKaSum;

	return BadaArraySum;
}

int SumOfArray1(int *a,int n,int i){
	if(i==n){
		return 0;
	}

	return a[i]+SumOfArray1(a,n,i+1);
}

int SumOfArray2(int *a,int n){
	if(n==0){
		return 0;
	}

	return a[n-1]+SumOfArray2(a,n-1);
}


int main(){
	int a[]={1,2,3,4,5,10};
	int n = sizeof(a)/sizeof(int);
	
	cout<<SumOfArray(a,n)<<endl;	
	cout<<SumOfArray1(a,n,0)<<endl;	
	cout<<SumOfArray2(a,n)<<endl;	



	return 0;
}