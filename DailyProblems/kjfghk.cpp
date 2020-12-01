#include<iostream>
#include<stdio.h>
using namespace std;
class one
{
	int a;
	public: 
	void get();
	void print();
	one add_To_Itself(one &);
};
void one::get()
{
	cin>>a;
	
}
void one::print()
{
	cout<<a<<endl;
}
one one :: add_To_Itself(one& o2)
{
	return o1.a+o2.a;
	//o2.a= o2.a+o2.a;
	//return ;
}
int main()
{
	one o1,o2,o3;
	o1.get();
	o2.get();
	o3=o1.add_To_Itself(o2);
	o3.print();
	return 0;
}
