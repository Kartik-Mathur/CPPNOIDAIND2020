// FirstIndexOf7
#include<iostream>
using namespace std;

int first7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i] == 7){
		return i;
	}

	int index = first7(a,n,i+1);
	return index;
}

int last7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i] == 7){
		int chotaIndex = i;
		int badaIndex = last7(a,n,i+1);
		if(badaIndex>chotaIndex){
			return badaIndex;
		}
		else{
			return chotaIndex;
		}
	}
	int index = last7(a,n,i+1);
	return index;

}

void Print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}


int main(){
	int a[]={1,3,2,4,5,6};
	int n = sizeof(a)/sizeof(int);
	cout<<n<<endl;
	Print(a,n);
	cout<<first7(a,n,0)<<endl;
	cout<<last7(a,n,0)<<endl;



	return 0;
}