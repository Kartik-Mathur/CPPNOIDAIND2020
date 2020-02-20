// ElephantWays
#include<iostream>
using namespace std;
int ElephantWays(int i,int j){
	// Base case
	if(i==0&& j==0){
		return 1;
	}

	// Recursive case
	int ans = 0;
	for(int k=0;k<=i-1;k++){
		ans += ElephantWays(k,j);
	}
	for(int k=0;k<=j-1;k++){
		ans += ElephantWays(i,k);
	}
	return ans;

}

int main(){

	int n,m;
	cin>>n>>m;


	cout<<ElephantWays(n,m)<<endl;


	return 0; 
}
