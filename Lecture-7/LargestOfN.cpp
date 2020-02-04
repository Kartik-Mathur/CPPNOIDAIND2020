// LargestOfN
#include <iostream>
using namespace std;
int length(char* a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

int main(){
	int n;
	char largest[100];
	int largest_size = 0;

	char a[100];
	cin>>n;
	cin.ignore();
	for(int i = 1;i<=n;i++){
		cin.getline(a,100);

		int newstring_length = length(a);
		if(newstring_length>largest_size){
			int i =0;
			while(a[i]!='\0'){
				largest[i] = a[i];
				i++;
			}
			largest[i] = '\0';
			largest_size = newstring_length;
		}
	}

	cout<<largest<<endl;
	cout<<largest_size<<endl;
	return 0;
}
