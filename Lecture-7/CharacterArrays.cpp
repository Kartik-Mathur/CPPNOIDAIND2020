// CharacterArrays
#include <iostream>
using namespace std;

void Print(char *ch1){
	for(int i=0;ch1[i]!='\0';i++){
		cout<<ch1[i]<<' ';
	}
	cout<<endl;	
}

void InputString(char *b,char delimit='\n'){
	char x;
	x = cin.get();
	int i = 0;
	while(x!=delimit){
		count++;
		b[i] = x;
		i++;

		x = cin.get();
	}
	b[i] = '\0';	
}

int main(){
	// initialization of character array
	char a[7]={'K','A','R','T','I','K','\0'};
	char ch[7] = "Kartik";
	char ch1[] = "Kartik Mathur";

	// cout<<a<<endl;
	// cout<<ch<<endl;
	// cout<<ch1<<endl;
	// cout<<sizeof(ch1)<<endl;

	// User input in character array using cin
	// char b[100];
	// cin>>b; // Inserts Null by default when we take a string input using cin
	// cout<<b<<endl;

	// To print the string using for loop
	// for(int i=0;ch1[i]!='\0';i++){
	// 	cout<<ch1[i]<<' ';
	// }
	// cout<<endl;

	Print(ch1);

	// Take Input along with whitespaces : ' ','\n','\t'
	char b[100];
	InputString(b,10);
	cin.getline(b,10,'$');
	cout<<b<<endl;
	// Print(b);
















	return 0;
}
