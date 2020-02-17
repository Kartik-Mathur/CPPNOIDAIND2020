// Subsequences
#include<iostream>
using namespace std;
void Subsequences(char in[],char *out,int i,int j){
	if(in[i] == '\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	// Ek baari ith character ko output array mei lena hai
	out[j] = in[i];
	Subsequences(in,out,i+1,j+1);
	
	// Ek baari ith character ko output array mei nahi lena hai
	Subsequences(in,out,i+1,j);
}

int main(){

	char a[]="abc";
	char out[100];

	Subsequences(a,out,0,0);

	return 0;
}