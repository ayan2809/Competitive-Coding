#include<bits/stdc++.h>
using namespace std;
class student
{
private:
	char *name;
	int age;
	const int rollNumber;

public:
	student(int age, char *name){
		this->age=age;
		// this->name= name;
		// this is a better approach and wont change the
		// pointer because it is creating a new space in
		// memory and storing it
		this->name = new char(strlen(name)+1);
		strcpy(this->name, name);
	}
	/*
	Initialisation list example

	student(int r, int age) : rollNumber(r), age(age){
	
	}
	*/

	void display()
	{
		cout<<name<<" "<<age<<endl;
	}
};

int main(){
	char name[] = "abcd";
	student s1(20, name);
	

	name[3]='e';
	student s2(24,name);
	s1.display();
	s2.display();
}