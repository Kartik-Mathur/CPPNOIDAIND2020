#include<iostream>
using namespace std;

bool KyaRakhSkteHai(int board[][10],int i,int j,int n){
	// Check row and column
	for(int k=0;k<n;k++){
		if(board[i][k]||board[k][j]){
			return false;
		}
	}

	// check right diagnol
	int row = i;
	int col = j;
	while(row>=0 && col<n){
		if(board[row][col]){
			return false;
		}
		row--;
		col++;
	}
	// Check left diagnol
	while(i>=0 && j>=0){
		if(board[i][j]){
			return false;
		}
		i--;
		j--;
	}
	return true;
}


bool N_Queen(int board[][10],int i,int n){
	// Base case
	if(i == n){
		// Print the board 
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				// cout<<board[i][j]<<' ';
				if(board[i][j]){
					cout<<" Q ";
				}
				else{
					cout<<" - ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	// Recursive case
	for(int j = 0; j<n ; j++){
		if(KyaRakhSkteHai(board,i,j,n)){
			board[i][j] = 1;
			bool KyaBaakiRakhPaaye = N_Queen(board,i+1,n);
			if(KyaBaakiRakhPaaye){
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}


int main(){

	int board[10][10]={0};

	int n;
	cin>>n;
	N_Queen(board,0,n);


	return 0;
}