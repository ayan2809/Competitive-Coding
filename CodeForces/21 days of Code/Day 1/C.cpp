#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	set<char, greater<char> > s1;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		s1.insert(s[i]);
	}
	int len=s1.size();
	if(len%2==0)
	{
		cout<<"CHAT WITH HER!";
	}
	else
	{
		cout<<"IGNORE HIM!";
	}
}
