// CheckPrime
#include <iostream>
using namespace std;

int a = 10;

// void PrintPrimes(int,char,float);

void CheckPrime(int n){

	int i = 2;
	while(i<=n-1){
		if(n%i==0){
			cout<<"Not Prime"<<endl;
			break;
		}
		i = i + 1;
	}
	if(i == n){
		cout<<"Prime "<<endl;
	}

	return;
}

bool CheckPrime1(int n){
	int i = 2;
	while(i<=n-1){
		if(n%i==0){
			return false;
		}
		i = i + 1;
	}
	return true;
}

void PrintPrimes(int n){
	int i;
	for(i=2;i<=n;i++){
		if(CheckPrime1(i) == true){
			cout<<i<<' ';
		}
	}
	cout<<endl;
}

int main(){

	// int n;
	// cin>>n;
	// PrintPrimes(n);
	// CheckPrime(n);
	
	// bool ans = CheckPrime1(n);
	// if(ans == true){
	// 	cout<<"Prime"<<endl;
	// }
	// else{
	// 	cout<<"Not Prime"<<endl;
	// }

	return 0;
}