// Pattern123
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	// go to every row
	int row = 1,no = 1;
	while(row<=n){
		// Work
		// do row times work
		int col = 1;
		while(col<=row){
			cout<<no<<' ';

			no = no + 1;
			col = col + 1;
		}


		row = row+1;
		cout<<endl;
	}

	return 0;
}