// RatInMaze
#include<iostream>
using namespace std;

bool RatInMaze(char maze[][5],int sol[][10],int i,int j,int n,int m){
	// Base case
	if(i==n-1&&j==m-1){
		sol[i][j] = 1;
		// Print the solution 
		for(int k=0;k<=n-1;k++){
			for(int l=0;l<=m-1;l++){
				cout<<sol[k][l]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	sol[i][j] = 1; // Assume the cell we are standing on is part of solution

	if(j+1<m && maze[i][j+1]!='X'){
		bool KyaRightSeRaastaMilla = RatInMaze(maze,sol,i,j+1,n,m);
		if(KyaRightSeRaastaMilla){
			return true;
		}
	}

	if(i+1<n && maze[i+1][j]!='X'){
		bool KyaNeecheSeRaastaMilla = RatInMaze(maze,sol,i+1,j,n,m);
		if(KyaNeecheSeRaastaMilla){
			return true;
		}
	}

	sol[i][j] = 0;
	return false;
}


int main(){
	char maze[][5]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int sol[10][10]={0};

	RatInMaze(maze,sol,0,0,4,4);


	return 0;
}