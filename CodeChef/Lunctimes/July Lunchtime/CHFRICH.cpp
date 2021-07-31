#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll a=0,b=0,x=0;
	cin>>a>>b>>x;
	ll ans=b-a;
	ll out=floor((double)ans/x);
	cout<<out<<endl;
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