// Break
#include <iostream>
using namespace std;


int main(){
	int i = 1;

	while(i<=10){
		if(i==5){
			cout<<i<<' ';
			break;
		}
		cout<<i<<' ';
		i=i+1;
	}
	cout<<endl;


	return 0;
}