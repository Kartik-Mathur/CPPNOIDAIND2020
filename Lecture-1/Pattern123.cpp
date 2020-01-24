// Pattern123
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int min_int = INT_MIN; // -2^31
	int max_int = INT_MAX; // 2^31 - 1
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