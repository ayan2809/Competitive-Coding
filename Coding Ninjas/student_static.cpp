#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
class student{
public:
	int rollNumber;
	int age;

	static int totalStudents;
	student(){
		totalStudents++;
	}

	static int getTotalStudent()
	{
		// no this keyword for static
		// static cannot access non static stuff
		
		return totalStudents;
	}

};
int main()
{

	// the scope resolution operator is used to access
	// the static properties
	// no copy for static elements are created
	// for eveery different object

	student s1;
	int student :: totalStudents=0;
	cout<<student :: totalStudents<<endl;

	// to update the static values we can use
	// the constructor
	// whenever a new object is created;

}