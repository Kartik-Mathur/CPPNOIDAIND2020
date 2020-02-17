// SelectionSort
#include<iostream>
using namespace std;

void SelectionSort(int *a,int n,int i){
	if(i==n-1){
		return;
	}

	int min = i;
	for(int j=i+1;j<n;j++){
		if(a[j]<a[min]){
			min = j;
		}
	}
	swap(a[min],a[i]);
	SelectionSort(a,n,i+1);
}


void Print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}



int main(){
	int a[]={8,7,6,9,4,3,2,1,0};
	int n = sizeof(a)/sizeof(int);

	Print(a,n);
	SelectionSort(a,n,0);
	Print(a,n);



	return 0;
}