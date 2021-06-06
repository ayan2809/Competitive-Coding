#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	int g=n-1;
	int f=0;
	for(int i=0;i<n/2;i++)
	{
		char c1,c2;
		c1=s[i];
		c2=s[n--];
		if(c1==c2)
		{	
			continue;
		}
		if(c1=='?' || c2=='?')
		{
			
		}
		if(c1!=c2)
		{
			f=1;
			break;
		}


	}
}