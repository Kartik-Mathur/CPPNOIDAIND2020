// SpiralPrint
#include <iostream>
using namespace std;

void SpiralPrint(int a[][10],int row,int col){

	int sr = 0,sc = 0,er = row-1,ec = col-1;

	while(sr<=er && sc<=ec){
		// Print sr from sc till ec and sr++
		for(int c = sc ; c<=ec ; c++){
			cout<<a[sr][c]<<' ';
		}
		sr++;

		// Print ec from sr till er and ec--
		for(int r = sr;r<=er;r++){
			cout<<a[r][ec]<<' ';
		}
		ec--;

		// Print er from ec till sc and er--
		if(sr<er){
			for(int c=ec;c>=sc;c--){
				cout<<a[er][c]<<' ';
			}
			er--;
		}

		// Print sc from er till sr and sc++
		if(sc<ec){
			for(int r = er;r>=sr;r--){
				cout<<a[r][sc]<<' ';
			}
			sc++;
		}
	}
	cout<<endl;

}

int main(){
	int a[10][10];

	int r,c;
	cin>>r>>c;
	int number = 1;
	for(int row=0;row<r;row++){
		for(int col=0;col<c;col++){
			a[row][col] = number;
			number++;
		}
	}
	for(int row=0;row<r;row++){
		for(int col=0;col<c;col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;

	SpiralPrint(a,r,c);





	return 0;
}