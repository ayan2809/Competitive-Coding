#include<bits/stdc++.h>
#include "Pair.cpp"
using namespace std;

int main()
{
	// below is for normal pair
	/* 

	Pair<int, double> p1;
	p1.setX(10);
	p1.setY(20.50);
	cout<<p1.getX()<<endl;
	cout<<p1.getY()<<endl;


	Pair<double,char> p2;
	p2.setX(100.50);
	p2.setY('C');
	cout<<p2.getX()<<endl;
	cout<<p2.getY()<<endl;
	*/

	// below is for triplet using pair
	Pair<Pair<int,int>, int> p3;
	Pair<int, int> p4;
	p4.setX(100);
	p4.setY(200);

	p3.setX(p4);
	p3.setY(300);

	cout<<p3.getX().getX()<<" "<<p3.getX().getY()<<" "<<p3.getY()<<endl;
	




}