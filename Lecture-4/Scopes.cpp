// Scopes
#include <iostream>
using namespace std;

int a = 10;

int main(){

	cout<<a<<endl;

	int a = 20;
	cout<<a<<endl;
	cout<<::a<<endl; // Scope Resolution Operator



	return 0;
}