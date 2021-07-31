#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll a=0,b=0;
	cin>>a>>b;
	if((b&(b-1))==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
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