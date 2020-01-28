#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;

	switch(ch){
		case 'N':
		case 'n':
				cout<<"North"<<endl;
				break;
		case 'e':
		case 'E':
				cout<<"East"<<endl;
				break;
		case 'w':
		case 'W':
				cout<<"West"<<endl;
				break;
		case 's':
		case 'S':
				cout<<"South"<<endl;
				break;
		default :
				cout<<"Invalid Input"<<endl;
	}


	return 0;
}