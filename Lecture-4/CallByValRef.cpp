// CallByValRef
#include <iostream>
using namespace std;

void swap1(int a,int b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 10, b = 20;

	cout<<"Before swapping a : "<<a<<" b : "<<b<<endl;
	swap1(a,b); 
	cout<<"After swapping a : "<<a<<" b : "<<b<<endl;



	return 0;
}