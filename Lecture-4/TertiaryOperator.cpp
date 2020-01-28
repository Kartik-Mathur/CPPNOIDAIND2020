// TertiaryOperator
#include <iostream>
using namespace std;

int main(){
	// condition ? work_to_do_condition_true : work_to_do_condition_fal;

	int n;
	cin>>n;

	n%2==0 ? cout<<"Even"<<endl : cout<<"Odd"<<endl;

	bool ans;

	ans = n%2==0 ? -100 : false;
	if(ans == true){
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}
	return 0;
}