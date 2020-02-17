// isPallindrome
#include<iostream>
using namespace std;

bool isPallindrome(char *a, int i, int j){
	if(i>=j){
		return true;
	}

	if(a[i] == a[j]){
		bool kyaChotaPallindromeHai = isPallindrome(a,i+1,j-1);
		return kyaChotaPallindromeHai;
	}
	else{
		return false;
	}
}

int main(){

	char a[]="abcda";
	if(isPallindrome(a,0,sizeof(a)-2)){
		cout<<"Pallindrome"<<endl;
	}
	else{
		cout<<"Not a Pallindrome"<<endl;
	}


	return 0;
}