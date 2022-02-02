#include<bits/stdc++.h>
using namespace std;
class student{
public:
	int age;
	const int rollNumber; //const variable
	int &x; // reference variable

	// having a const variable we need a constructor
	// thus initialization list is used instead
	// to initialize const integers
	student(int r,int age): rollNumber(r), age(age), x(this->age)
	{
		// we cant do this
		// rollNumber=r;
	}
	void print()
	{
		cout<<"Age:"<<age<<endl;
		cout<<"Roll Number:"<<rollNumber<<endl;
		cout<<"x:"<<x<<endl;
	}
};

int main()
{
	student s1(101,20);
	s1.print();
	// s1.age=20;
	// here default constructor is called
	// rollnumber being const it cant initialise
	// s1.rollNumber=101;

}