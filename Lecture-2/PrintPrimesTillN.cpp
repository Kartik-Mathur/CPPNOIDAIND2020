#include <iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	int no = 2;
	while(no<=n){
		int i = 2;
		while(i<=no-1){
			if(no%i==0){
				// cout<<"Not Prime"<<endl;
				break;
			}

			i=i+1;
		}
		if(i==no){
			// cout<<"Prime"<<endl;
			cout<<no<<' ';
		}
		no = no + 1;
	}
	cout<<endl;


	// Print 5 numbers : 1 2 3 4 5
	int a = 1;
	while(a<=5){
		cout<<a<<' ';
		a=a+1;
	}
	cout<<endl;



	return 0;
}