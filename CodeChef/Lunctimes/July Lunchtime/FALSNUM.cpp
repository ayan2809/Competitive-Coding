#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	string s,out="";
	cin>>s;
	//cout<<s<<endl;
	if(s[0]=='1')
	{
		s[0]='0';
	}
	cout<<1<<s<<endl;
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