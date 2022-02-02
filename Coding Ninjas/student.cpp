#include<bits/stdc++.h>
using namespace std;
class student{
public:
	int age;
	int rn;

	// constructor
	student(int a, int b){
		age=a;
		rn=b;
	}

	//destructor
	~student(){
		cout<<age<<endl;
		cout<<"Destructor is called"<<endl;
	}
	void display()
	{
		cout<<"AGE :"<<age<<endl;
		cout<<"Roll Number :"<<rn<<endl;
	}
};
int main()
{
	//example of copy constructor
	student s1(10,1001);
	student s2(s1);
	s2.display();

	// dynamically made
	student *s3 = new student(20, 2001);
	s3->display();

	student *s4=new student(*s3);
	s4->display();

	// equivalent copy assignment operator
	student *s5= new student(30,3001);

	student s6(40, 4001);

	// s6=*s5;

	s6.display();



	
}