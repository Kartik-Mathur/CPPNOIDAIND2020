// PrintIncreasingNumbers
#include <iostream>
using namespace std;

void PrintInc(int n){
	if(n==0){
		return;
	}

	PrintInc(n-1);
	cout<<n<<' ';
	
}

int main(){
		
	int n;
	cin>>n;

	PrintInc(n);
	cout<<endl;


	return 0;
}