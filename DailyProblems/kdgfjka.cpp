#include<iostream>
using namespace std;

class one
{
	int a;
	static int b;
	public:
		void initialize();
		void print();
		
};
int one :: b=0;
void one::initialize ()
{
	one obj;
	cin>>a>>obj.b;
	
}
void one::print()
{
	one obj;
	cout<<a<<" "<<obj.b<<endl;
	
}
int main()
{
	one o;
	o.initialize();
	o.print();
	return 0;
}
