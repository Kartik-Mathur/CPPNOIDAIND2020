// MergeSort
#include<iostream>
using namespace std;

void merge(int *a,int *b,int*c,int s,int e){
	int mid = (s+e)/2;
	int i = s;
	int j = mid+1;
	int k = s;

	while(i<=mid && j<=e){
		if(b[i]<c[j]){
			a[k++] = b[i++];
		}
		else{
			a[k++] = c[j++];
		}
	}

	while(i<=mid){
		a[k++] = b[i++];
	}
	while(j<=e){
		a[k++] = c[j++];
	}
}

void MergeSort(int *a,int s,int e){
	if(s>=e){
		return;
	}

	// Divide
		int mid = (s+e)/2;
		int b[100],c[100];
		for(int i = s;i<=mid;i++){
			b[i] = a[i];
		}
		for(int i=mid+1;i<=e;i++){
			c[i] = a[i];
		}

	// Sort
		MergeSort(b,s,mid);
		MergeSort(c,mid+1,e);

	// Merge
		merge(a,b,c,s,e);
}

void Print(int*a ,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

int main(){

	int a[]={8,7,6,9,4,3,2,1,0};
	int n = sizeof(a)/sizeof(int);
	Print(a,n);
	MergeSort(a,0,n-1);
	Print(a,n);

	return 0;
}