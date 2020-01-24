// Continue
#include <iostream>
using namespace std;


int main(){

	int i = 1;
	while(i<=10){
		if(i==3){
			i++;
			continue;
		}
		cout<<i;
		i++;
	}
	cout<<endl;


	return 0;
}