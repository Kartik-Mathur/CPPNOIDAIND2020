#include <iostream>
using namespace std;

void PrintTable(int init,int fval,int step){
	int f = init;

	while(f<=fval){
		int celsius = 5*(f-32)/9;
		// int celsius = (5/9.0)*(f-32);
		cout<<f<<' '<<celsius<<endl;

		f += step;
	}

}

int main(){
	int init,fval,step;

	cin>>init>>fval>>step;

	PrintTable(init,fval,step);
	return 0;
}