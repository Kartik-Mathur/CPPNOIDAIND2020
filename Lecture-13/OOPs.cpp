// OOPs
#include<iostream>
using namespace std;

/////////////////////////////// BLUEPRINT ///////////////////////////////////
class Student{
public:
	char name[100];
	int marks;
	int roll;

	// Constructor : It is used to create objects
	Student(){
		cout<<"In Default Constructor"<<endl;
	}

	// Parameterized Constructor
	Student(char *n,int r, int m){
		cout<<"In Parameterized Constructor"<<endl;
		marks = m;
		roll = r;
		strcpy(name,n);
	}

	// Copy Constructor
	Student(Student &X){
		cout<<"In Copy Constructor"<<endl;
		strcpy(name, X.name);
		roll = X.roll;
		marks = X.marks;
	}

	void Print(){
		cout<<"Name : "<<name<<endl;
		cout<<"Roll : "<<roll<<endl;
		cout<<"Mark : "<<marks<<endl<<endl;
	}
};
/////////////////////////////// BLUEPRINT ///////////////////////////////////


int main(){

	Student s; // Object s
	// s- An object of class Student
	// s.name[0] = 'P';
	// s.name[1] = 'I';
	// s.name[2] = 'Y';
	// s.name[3] = 'U';
	// s.name[4] = 'S';
	// s.name[5] = '\0';
	strcpy(s.name,"Piyush");
	s.roll = 1;
	s.marks = 20;

	Student s1;

	strcpy(s1.name,"Sahil");
	s1.roll = 2;
	s1.marks = 25;

	Student s2("Armaan",3,40);
	Student s3("Aman",4,50);

	Student s4 = s; // Calls copy constructor
	Student s5(s4); // Calls copy constructor

	s.Print();
	s1.Print();
	s2.Print();
	s3.Print();
	s4.Print();
	s5.Print();

	// cout<<s.name<<endl;
	// cout<<s.roll<<endl;
	// cout<<s.marks<<endl;

	// cout<<s1.name<<endl;
	// cout<<s1.roll<<endl;
	// cout<<s1.marks<<endl;


	return 0; 
}
