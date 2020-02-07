// PrintStrings
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[]="I Love to Code ";
	int n = sizeof(a);

	int i = n - 2;
	while(i>=0){

		while(a[i]!=' '){
			i--;
		}
		
		for(int j=i+1;a[j]!=' ';j++){
			cout<<a[j];
		}
		i--;
	}
	// char *p;
	// p = strtok(a," ");
	// while(p!=NULL){
	// 	cout<<p<<endl;
	// 	p = strtok(NULL," ");
	// }


	return 0;
}