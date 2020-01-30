// 
#include <iostream>
using namespace std;

int BinarySearch(int a[],int n,int key){
	int s = 0,e = n-1;

	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(key<a[mid]){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return -1;
}


int main(){
	int a[]={1,5,8,9,11,15,17};
	int n=sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	int key;
	cin>>key;

	int ans = BinarySearch(a,n,key);
	if(ans!=-1){
		cout<<"Element Found at index : "<<ans<<endl;
	}
	else{
		cout<<"Element Not Found!"<<endl;
	}

	return 0;
}