#include <iostream>
using namespace std;

void fun(int *ptr){
	*ptr = *ptr + 100;

}

int main(){
	int a = 10;
	int *aptr=NULL;

	aptr = &a;
	cout<<a<<endl; // 10 
	fun(aptr); 
	cout<<a<<endl; // 10 | 110 

	return 0;
}