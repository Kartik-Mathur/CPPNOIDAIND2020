// MergeTwoSortedArrays
#include<iostream>
using namespace std;

void merge(int *a,int *b,int n,int m,int *c){

	int i=0,j=0,k=0;
	while(i<=n && j<=m){
		if(a[i]<b[j]){
			c[k++] = a[i++];
		}
		else{
			c[k++] = b[j++];
		}
	}

	while(i<=n){
		c[k++] = a[i++];
	}

	while(j<=m){
		c[k++] = b[j++];
	}
	for(int i=0;i<=n+m+1;i++){
		cout<<c[i]<<' ';
	}
	cout<<endl;
}


int main(){
	int a[5]={1,3,5,6,8};
	int n = 5;
	int b[4]={0,2,4,7};
	int m = 4;
	int c[9];

	merge(a,b,n-1,m-1,c);




	return 0;
}