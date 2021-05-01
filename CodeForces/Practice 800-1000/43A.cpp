#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	set<string> s1;
	vector <string> s(t);
	int i=0;
	while(t--)
	{
		cin>>s[i];
		s1.insert(s[i]);
		i++;
	}
	string str,s2;
	int max=0;
	for(auto it=s1.begin();it!=s1.end();it++)
	{
		s2=*it;
		int coun=count(s.begin(), s.end(), s2);
		if(coun>max)
		{
			max= coun;
			str=s2;
		}	
	}
	cout<<str<<endl;
}	