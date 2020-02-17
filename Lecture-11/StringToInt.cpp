// StringToInt
#include<iostream>
using namespace std;

int StringToInt(char* a,int n){
	// Base case	
	if(n==0){
		return 0;
	}

	// Recursive case
	int digit = a[n-1]-'0';
	return StringToInt(a,n-1)*10+digit;
}


int main(){
	char a[]="12345";
	cout<<'1'+0<<endl;
	cout<<StringToInt(a,sizeof(a)-1)<<endl;

	return 0;
}