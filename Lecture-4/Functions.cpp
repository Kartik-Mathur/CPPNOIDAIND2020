// Functions
#include <iostream>
using namespace std;

// void helloWorld();// Forward Declaration
void helloWorld(){
	cout<<"Hello World!!!"<<endl;
}

void multiply(int a,int b){
	cout<<"Product of a : "<<a<<" and b : "<<b<<" is "<<a*b<<endl;
}

int mul(int a,int b){

	return a*b;
}

int main(){

	// cout<<"Hello World!"<<endl;
	helloWorld(); // Calling or Invoking the function
	int x,y;
	cin>>x>>y;
	multiply(x,y);
	int product = mul(x,y);
	int ans = product + 100;
	// int ans = x*y + 100;
	cout<<ans<<endl;
	cout<<product*20<<endl;
	return 0;
}

// void helloWorld(){
// 	cout<<"Hello World!!!"<<endl;
// }



