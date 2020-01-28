// 
#include <iostream>
using namespace std;

int main(){

	int i = 1;

	// do{
	// 	// Work
	// }while(cond);
	char ch;

	int count = 0;
	
	do{
		ch = cin.get();
		count++;
	}while(ch!='$');

	// ch = cin.get();
	// while(ch!='$'){
	// 	count = count + 1;
	// 	ch = cin.get();
	// }

	do{
		cout<<i<<' ';

		i = i + 1;
	}while(i>10);

	cout<<endl;

	return 0;
}