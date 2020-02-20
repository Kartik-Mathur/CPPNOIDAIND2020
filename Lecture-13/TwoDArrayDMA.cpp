// TwoDArrayDMA
#include<iostream>
using namespace std;

int main(){

	int **a;
	int rows,cols;
	
	cin>>rows>>cols;

	
	a= new int*[rows];
	for(int i=0;i<rows;i++){
		a[i] = new int[cols];
	}
	
	int number = 1;

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			a[i][j] = number;
			number++;
		}
	}

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}

	for(int i=0;i<rows;i++){
		delete []a[i];
	}
	delete []a;
	a = NULL;


	return 0; 
}
