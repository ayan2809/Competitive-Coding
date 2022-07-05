#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"

void solve()
{
	int n=0;
	cin>>n;
	string s="";
	cin>>s;
	int a=0,b=0,c=0,d=0;
	for(auto it: s)
	{
		if(it >=48 && it <=57)
			a=1;
		else if(it>=65 && it<=90)
			b=1;
		else if(it>=97 && it<=122)
			c=1;
		else if(it=='*' || it=='@' || it=='&' || it=='#')
			d=1;
	}
	if(a==1 && b==1 && c==1 && d==1)
	{
		if(s.length()<7)
		{
			for(int i=s.length();i<7;i++)
			s+='1';
		}
		cout<<s;
	}
	else
	{
		if(a==0)
			s+='1';
		if(b==0)
			s+='A';
		if(c==0)
			s+='a';
		if(d==0)
			s+='@';
		for(int i=s.length();i<7;i++)
			s+='1';
		cout<<s;
	}
}
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int k=1;
	while(t--)
	{	
		// out={};
		cout<<"Case #"<<k<<": ";
		solve();
		cout<<endl;
		k++;
	}
}