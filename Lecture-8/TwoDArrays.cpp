// TwoDArrays
#include <iostream>
using namespace std;

int main(){
	int arr[100][100]={0};
	int r,c;
	cout<<"Enter rows and cols ";
	cin>>r>>c;

	for(int row = 0; row<r; row++){
		for(int col = 0; col<c ; col++){
			cin>>arr[row][col];
		}
	}

	for(int row = 0; row<r; row++){
		for(int col = 0; col<c ; col++){
			cout<<arr[row][col];
		}
		cout<<endl;
	}

	int a[][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for(int row=0;row<3;row++){
		for(int col=0;col<4;col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}

	for(int col = 0; col<4; col++){
		for(int row=0; row<3; row++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;

	}
	return 0;
}