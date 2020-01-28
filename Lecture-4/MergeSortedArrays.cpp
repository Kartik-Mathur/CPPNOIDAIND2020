// MergeSortedArrays
#include <iostream>
using namespace std;

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}

	cout<<endl;
}

void MergeSortedArrays(int a[],int b[],int m,int n){
	int i = m-1;
	int j = n-1;
	int k = m+n-1;

	while(i>=0&&j>=0){
		if(a[i]<b[j]){
			a[k]=b[j];
			k--;
			j--;
		}
		else{
			a[k]=a[i];
			k--;
			i--;
		}
	}

	if(j>=0 && i<0){
		while(j>=0){
			a[k]=b[j];
			k--;
			j--;
		}
	}
	else{
		while(i>=0){
			a[k]=a[i];
			k--;
			i--;
		}
	}
}

int main(){

	int a[7]={1,3,6,8};
	int b[3]={2,4,10};

	int m = 4;
	int n = 3;

	MergeSortedArrays(a,b,m,n);
	PrintArray(a,7);


	return 0;
}