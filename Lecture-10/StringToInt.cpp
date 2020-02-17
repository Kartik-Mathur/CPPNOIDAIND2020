// StringToInt
#include<iostream>
using namespace std;

int StringToInt(char *a,int n){
	if(n==0){
		return 0;
	}

	int digit = a[n-1] - '0';
	int chotaAns = StringToInt(a,n-1);
	int badaAns = chotaAns*10+digit;
	return badaAns;
}

int main(){

	char a[]="4351";
	int n = sizeof(a)/sizeof(char);
	
	cout<<StringToInt(a,n-1)*10<<endl;


	return 0;
}