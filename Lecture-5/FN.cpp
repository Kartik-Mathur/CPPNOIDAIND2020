#include <iostream>
using namespace std;
#define ll long long
int main(){
	ll int n;
	cin>>n;
	while(n>0){
		ll int no;
		cin>>no;
		if(no%2==0){
			cout<<no/2<<endl;
		}
		else{
			cout<<(-1)*(no+1)/2<<endl;
		}
		n--;
	}
	return 0;
}