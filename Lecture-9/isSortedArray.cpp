// isSortedArray
#include <iostream>
using namespace std;

bool isSorted(int *a,int n){
	if(n==0||n==1){
		return true;
	}

	bool KyaChotaArraySortedHai = isSorted(a+1,n-1);
	if(a[0]<a[1] && KyaChotaArraySortedHai){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	int a[]={1,2,4,5,6,7,8,9,10};
	int n = sizeof(a)/sizeof(int);

	if(isSorted(a,n)){
		cout<<"Sorted"<<endl;
	}
	else{
		cout<<"Not Sorted"<<endl;
	}




	return 0;
}