// Factorial
#include <iostream>
using namespace std;

int fact(int n){
	// Base case
	if(n == 0 ){
		return 1;
	}
	// REcursive case
	// int ChotaAns = fact(n-1); // Assumption-Pure wali

	// Solution
	// int BadaAns = n*ChotaAns;
	return n*fact(n-1);
}


int main(){
	int n;
	cin>>n;

	cout<<fact(n)<<endl;



	return 0;
}