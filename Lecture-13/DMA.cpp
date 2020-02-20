// DMA
#include<iostream>
using namespace std;

// void CreateArray(int n){
// 	int *arr = new int[n];

// 	for(int i=0;i<n;i++){
// 		arr[i] = i*i;
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<' ';
// 	}
// 	cout<<endl;
// }


int* CreateArray(int n){

	int *arr = new int[n];

	for(int i=0;i<n;i++){
		arr[i] = i*i;
	}

	return arr;
}


int main(){
	int n;
	cin>>n;

	int *a = CreateArray(n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	delete []a;
	a=NULL;


	// int *a = new int;
	// *a = 10;

	// cout<<*a<<endl;




	return 0; 
}
