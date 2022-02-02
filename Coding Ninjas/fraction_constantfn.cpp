#include<bits/stdc++.h>
using namespace std;
class fraction
{
private:
	int numerator;
	int denominator;

public:
	// fraction(int numerator, int denominator){
	// 	this->numerator = numerator;
	// 	this->denominator= denominator;

	// }
	fraction(){

	}

	int getNumerator () const
	{
		return numerator;
	}

	int getDenominator () const
	{
		return denominator;
	}

	void setNumerator(int n){
		numerator=n;
	}

	void setDenominator(int n){
		denominator=n;
	}


	void display() const
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

	void add(fraction f2)
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

	// fraction f1(10, 2);
	// fraction f2(15, 4);

	// const object
	// using constant objects we can call only constant functions
	// calling any non constant objects will give us an error
	fraction const f3;

	// these errors 
	cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<endl;
	
	// f3.setNumerator(10);
	// f1.display();
	// f1.add(f2);
	// f1.display();
}