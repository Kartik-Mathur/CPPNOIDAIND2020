// OOPs
#include<iostream>
using namespace std;

class Car{
private:
	int price;
	const int tyre;
public:
	char *name;
	int year;

	Car():tyre(4){
		cout<<"In Default Constructor"<<endl;
		name = NULL;
	}

	Car(char* n,int p,int y):tyre(4),year(y),price(p){
		cout<<"In Parametreized Constructor"<<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		// price = p;
		// year = y;
	}

	Car(Car &X):tyre(4){
		cout<<"In Copy Constructor"<<endl;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		// name = X.name;
		price = X.price;
		year = X.year;
	}

	void SetPrice(int p){
		if(p>100){
			price = p;
		}
		else{
			price = 120;
		}
	}
	
	int GetPrice(){
		return price;
	}
	////////////////////// Operator Overloading ////////////////////////////
	void operator=(Car X){
		cout<<"In Copy Assignment Operator"<<endl;
		if(name){
			delete []name;
			name = NULL;
		}
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price = X.price;
		year = X.year;
	}
	////////////////////// Operator Overloading ////////////////////////////

	void SetName(char *n){
		if(name){
			delete []name;
			name = NULL;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);
	}

	void Print(){
		cout<<"Name   : "<<name<<endl;
		cout<<"Price  : $"<<price<<endl;
		cout<<"Year   : "<<year<<endl<<endl;
	}

	~Car(){
		cout<<"In Destructor : "<<name<<endl;
	}
};	

	
int main(){

	Car a;
	// strcpy(a.name,"BMW");
	a.SetName("BMW");
	// a.price = 100;
	a.SetPrice(100);
	a.year = 2016;
	// cout<<a.price<<endl;
	cout<<a.GetPrice()<<endl;


	Car b("Audi",200,2017);
	Car c(b); // or Car c = b; calls copy constructor
	// c = a; // Assignment Operator
	c.name[0] = 'B';

	a.Print();	
	b.Print();
	c.Print();

	return 0; 
}

