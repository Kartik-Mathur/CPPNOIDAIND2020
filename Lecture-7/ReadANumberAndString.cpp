// ReadANumberAndString
#include <iostream>
using namespace std;

int main(){
	char b[100];
	int n;

	cin>>n;
	cin.get();// cin.ignore()
	cin.getline(b,100);

	cout<<n<<endl;
	cout<<b<<endl;

	return 0;
}
