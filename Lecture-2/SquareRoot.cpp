// SquareRoot
#include <iostream>
using namespace std;


int main(){
	int n,precision;

	cin>>n>>precision;

	int current_precision = 0;
	float i = 0;
	float inc = 1;

	while(current_precision<=precision){
		while(i*i<=n){

			i = i + inc;
		}

		i = i - inc;
		inc = inc/10;

		current_precision = current_precision + 1;
	}
	cout<<i<<endl;


	return 0;
}