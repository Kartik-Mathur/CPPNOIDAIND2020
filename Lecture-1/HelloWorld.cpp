#include <iostream>
using namespace std;

int main(){

	int x;
	cin>>x;

	int i =1;
	while(i<=x){
		cout<<i<<' ';

		i=i+1;
	}
	cout<<endl;

	// if-else
	bool raining;
	raining = true;
	if(raining == true){
		cout<<"Take Umbrealla"<<endl;
	}

	// else{
	// 	cout<<"Dont take Umbrealla"<<endl;
	// }

	// User Input
	int a;
	cin>>a; // take input from user via console and
		// store it inside bucket/Variable 'a'
	cout<<"User Entered : "<<a*10<<endl;

	// Single line comment
	/*
	This is 
	a Multi
	Line Comment
	*/

	// int row; // Bucket create krna : Create
	// row = 1; // Bucket ko value assign : Assignment
	int row = 1; // Initialization : Create Bucket and 
			     // assign it value at the same time

	// cout<<row; // Print
	// cout<<endl;
	cout<<row<<endl;
	row = 1000; // Update
	cout<<row<<endl;

	cout<<"Hello World!"<<endl<<1<<endl<<'A'<<endl;
	// cout<<"Hello World!";
	// cout<<'\n';
	// cout<<endl;
	// cout<<1;
	// cout<<'\n';
	// cout<<'A';
	// cout<<'\n';

	return 0;
}