#include <iostream>
using namespace std;

int main(){

	int a[]={5,4,3,2,1};
	int n = sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	for(int i=0;i<=n-2;i++){
		int count = 0;
		// cout<<"i : "<<i<<endl;
		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				count++;
			}
		}
		if(count==0){
			break;
		}
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;



	return 0;
}