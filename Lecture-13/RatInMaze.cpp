#include<iostream>
using namespace std;

int RatInMaze(int i,int j){
	// Base case
	if(i==0&&j==0){
		return 1;
	}
	if(i<0||j<0){
		return 0;
	}

	// Recursive case
	return RatInMaze(i-1,j)+RatInMaze(i,j-1);
}



int main(){

	int n,m;
	cin>>n>>m;

	cout<<RatInMaze(n,m)<<endl;


	return 0; 
}
