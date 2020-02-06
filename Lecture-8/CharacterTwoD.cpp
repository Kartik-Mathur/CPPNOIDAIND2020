// CharacterTwoD
#include <iostream>
using namespace std;

int WavePrint(int a[][4],int row,int col){

}

int main(){
	char b[10][100];
	cout<<"Enter N ";
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++){
		cin.getline(b[i],100);
	}

	for(int i=0;i<n;i++){
		cout<<b[i]<<endl;
	}
	
	// char a[4][4]={
	// 	{'A','B','C','\0'},
	// 	{'D','E','F','\0'},
	// 	{'G','H','I','\0'}
	// };
	char a[4][4]={
		"ABC",
		"DEF",
		"GHI"
	};
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;

	// for(int row = 0; row<3; row++){
	// 	for(int col = 0; col<3 ; col++){
	// 		cout<<a[row][col]<<' ';
	// 	}
	// 	cout<<endl;
	// }

	return 0;
}