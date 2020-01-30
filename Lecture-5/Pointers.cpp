// Pointers
#include <iostream>
using namespace std;

int main(){

	int arr[]={1,2,3,4};
	cout<<arr<<endl;
	cout<<&arr[0]<<endl;

	int *x=NULL;
	cout<<x<<endl;
	cout<<*x<<endl;

	int a = 10;
	int *aptr = &a;
	float b = 10.11;
	float *bptr = &b;
	char ch = 'A';
	char *chptr = &ch;

	cout<<&a<<endl; // 100
	cout<<aptr<<endl; // 100
	cout<<*aptr<<endl; // 10
	cout<<*(&a)<<endl; // 10

	cout<<&b<<endl;
	cout<<bptr<<endl;
	cout<<(void *)&ch<<endl;
	cout<<(int *)chptr<<endl;
	cout<<*chptr<<endl;

	return 0;
}