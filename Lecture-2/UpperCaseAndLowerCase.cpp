// UpperCaseAndLowerCase
#include <iostream>
using namespace std;


int main(){
	char ch;
	cin>>ch;

// 1st way
	// int a = ch;
	// if(a>=65 && a<=90){
	// 	cout<<"Upper case"<<endl;
	// }
	// else{
	// 	cout<<"Lower case"<<endl;
	// }

// 2nd way
	if(ch>=65 && ch<=90){
		cout<<"Upper case"<<endl;
	}
	else{
		cout<<"Lower case"<<endl;
	}	

// 3rd way
	if(ch>='A' && ch<='Z'){
		cout<<"Upper case"<<endl;
	}
	else{
		cout<<"Lower case"<<endl;
	}	

	return 0;
}
