#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0;
	set<int, greater<int> > s1;
	cin>>a>>b>>c>>d;
	s1.insert(a);
	s1.insert(b);
	s1.insert(c);
	s1.insert(d);
	cout<<4-s1.size();
}
