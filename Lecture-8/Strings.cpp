// Strings
#include <iostream>
using namespace std;

int main(){

	string s1[100];
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++){
		getline(cin,s1[i]);
	}

	for(int i=0;i<n;i++){
		// cout<<s1[i]<<endl;
		for(int j=0;s1[i][j]!='\0';j++){
			cout<<s1[i][j]<<' ';
		}
		cout<<endl;
	}


	string a = "Hello World!!";
	cout<<a<<endl;
	string b("Welcome !!!");
	cout<<b<<endl;
	string s;
	// cin>>s;
	getline(cin,s);

	cout<<s<<endl;
	for(int i=0;s[i]!='\0';i++){
		cout<<s[i]<<' ';
	}
	cout<<endl;
	


	return 0;
}