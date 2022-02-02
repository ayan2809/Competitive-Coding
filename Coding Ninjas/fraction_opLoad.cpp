#include<bits/stdc++.h>
using namespace std;
class fraction
{
private:
	int numerator;
	int denominator;

public:
	fraction(int numerator, int denominator){
		this->numerator = numerator;
		this->denominator= denominator;

	}
	void display()
	{
		cout<<numerator<<"/"<<denominator<<endl;
	}

	void simplify(){
		int gcd=1;
		int j= min(this->numerator, this->denominator);
		for(int i=1;i<=j;i++)
		{
			if(this->numerator % i==0 && this->denominator % i ==0)
			{
				gcd=i;
			}
		}
		this->numerator=this->numerator/gcd;
		this->denominator=this->denominator/gcd;
	}
	/*
	fraction add(fraction const &f2)
	{
		int lcm= this->denominator* f2.denominator;
		int x= lcm/this->denominator;
		int y= lcm/f2.denominator;

		int num= (x* this->numerator)+(y *f2.numerator);

		// numerator=num;
		// denominator=lcm;

		fraction fNew(num, lcm);
		fNew.simplify();
		return fNew;
	}
	*/
	fraction operator+(fraction const &f2)
	{
		int lcm= this->denominator* f2.denominator;
		int x= lcm/this->denominator;
		int y= lcm/f2.denominator;

		int num= (x* this->numerator)+(y *f2.numerator);

		// numerator=num;
		// denominator=lcm;

		fraction fNew(num, lcm);
		fNew.simplify();
		return fNew;
	}
	fraction operator*(fraction const &f2){
		int n=numerator * f2.numerator;
		int d= denominator*f2.denominator;
		fraction fnew(n,d);
		fnew.simplify();
		return fnew;
	}
	bool operator ==(fraction const &f2)
	{
		return (numerator  == f2.numerator && denominator== f2.denominator);		
	}
	// pre increment
	fraction& operator++(){
		numerator=numerator+denominator;
		simplify();
		return *this;
	}

	// post increment
	fraction operator++(int)
	{
		fraction fnew(numerator,denominator);
		numerator=numerator+denominator;
		simplify();
		fnew.simplify();
		return fnew;
	}

	// += operator
	void operator+=(fraction const &f2)
	{
		int lcm= this->denominator* f2.denominator;
		int x= lcm/this->denominator;
		int y= lcm/f2.denominator;

		int num= (x* this->numerator)+(y *f2.numerator);

		numerator=num;
		denominator=lcm;
		simplify();
	}
};

int main()
{

	fraction f1(10, 2);
	fraction f2(15, 4);

	// fraction f3= f1.add(f2);
	// instead of the above add function 
	// we want to use the + operator

	fraction f3=f1+f2;
	fraction f4=f1*f2;
	f1.display();
	++f1;
	f1.display();
	// f1.add(f2);
	f2.display();
	f3.display();
	f4.display();

	fraction f6= ++(++f1);
	f6.display();

	if(f1==f2)
	{
	 	cout<<"Equal"<<endl;
	}
	else{
		cout<<"NOT EQUAL"<<endl;
	}

	f1+=f2;
	f1.display();
	f2.display();

}