#include<bits/stdc++.h>
using namespace std;
class Student{
public: 
	int rollNumber;
private:
	int age;

	~Student(){
		cout<<"Destructor Called !"<<endl;
	}

	Student()
	{
		cout<<"Constructor Called"<<endl;
	}

	Student()
	{
		cout<<"Constructor 1 Called"<<endl;
	}
	Student(int rollNumber)
	{
		cout<<"Constructor 2 is called"<<endl;
		this.rollNumber=rollNumber;
	}
	Student(int a, int r)
	{
		cout<<"Constructor 3 called"<<endl;
		this.age=a;
		this.rollNumber=r;
	}
};
int main()
{
	Student s1; // constructor 1 is called

	Student s2(101); // c2 called
 
	Student s3(20, 102); // c3 called

	Student s4(s3);

	s1=s2;   //copy constructor


	Student s5= s4; // internally copy constructor is called

	
}