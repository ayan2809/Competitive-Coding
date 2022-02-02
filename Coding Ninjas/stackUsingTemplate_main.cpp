#include<bits/stdc++.h>
#include "stackUsingTemplate.cpp"
using namespace std;
int main()
{
	stackUsingTemplate <int> s;
	s.push(1);
	s.push(2);
	cout<<s.pop()<<endl;
	s.push(2);
	s.push(3);
	s.push(4); 
	cout<<s.top()<<endl;


}