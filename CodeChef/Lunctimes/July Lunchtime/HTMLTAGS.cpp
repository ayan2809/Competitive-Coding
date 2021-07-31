#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	string s="";
	cin>>s;
	string checker="</>";
	int j=0,f=0;
	if(s.size()<4)
		{
			cout<<"Error"<<endl;
			return;
		}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==checker[j])
		{
			j++;
		}
		int ch=(int)s[i];
		if((ch>=65 && ch<=90))
		{
			f=1;
			break;
		}
	}
	if(f==1 || j!=3)
		cout<<"Error"<<endl;
	else if(f==0 && j==3)
	{
		cout<<"Success"<<endl;
	}
}	
int main()
{
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
}