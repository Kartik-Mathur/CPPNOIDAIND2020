// 
#include <iostream>
using namespace std;

int length(char* a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

int main(){
	char a[100];
	cin>>a;

	int n;
	cin>>n;

	int size = length(a);

	// 1. shift all characters n steps ahead
	int i = size-1;
	while(i>=0){
		a[i+n] = a[i];
		i--;
	}

	cout<<a<<endl;
	i = size;
	int k = 0;
	for(int x = 1; x <= n; x++){
		a[k] = a[i];
		k++;
		i++;
	}
	cout<<a<<endl;
	a[size] = '\0';
	cout<<a<<endl;








	return 0;
}
