// SETBITS
#include <iostream>
using namespace std;


int main(){
	int n;
	int count = 0;

	cin>>n;

	for( ;n>0;n=n>>1){
		if((n&1) == 1){
			count++;
		}
	}
	cout<<count<<endl;


	return 0;
}