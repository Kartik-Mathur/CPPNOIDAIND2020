// PhoneKeyPad
#include<iostream>
using namespace std;

char a[][10]={
	"","","ABC","DEF","GHI","JKL","MNOP","QRS","TUV","WXYZ"
};

void PhoneKeyPad(char *in,char*out, int i,int j){
	// base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}

	// recursive case
	int digit = in[i] - '0';
	for(int k = 0 ; a[digit][k]!='\0' ; k++){
		out[j] = a[digit][k];
		PhoneKeyPad(in,out,i+1,j+1);
	}

}

int main(){

	char in[100],out[100];
	cin>>in;
	PhoneKeyPad(in,out,0,0);

	return 0;
}