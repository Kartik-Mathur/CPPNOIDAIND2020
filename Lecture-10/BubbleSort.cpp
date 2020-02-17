// BubbleSort
#include<iostream>
using namespace std;

// void BubbleSort(int *a,int n,int i){
// 	if(i==n){
// 		return;
// 	}

// 	for(int j=0;j<n-1-i;j++){
// 		if(a[j]>a[j+1]){
// 			swap(a[j],a[j+1]);
// 		}
// 	}

// 	BubbleSort(a,n,i+1);
// }

void BubbleSort(int *a,int n,int i,int j){
	if(i==n){
		return;
	}

	if(j==n-1-i){
		BubbleSort(a,n,i+1,0);
	}
	else{
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
		BubbleSort(a,n,i,j+1);
	}	
}


void Print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}


int main(){
	int a[]={88,91,6,5,7,8,4,3,2,1,90,0};
	int n = sizeof(a)/sizeof(int);
	Print(a,n);
	BubbleSort(a,n,0,0);
	Print(a,n);

	return 0;
}