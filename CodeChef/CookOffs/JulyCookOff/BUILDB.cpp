#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll n=0,r=0;
	cin>>n>>r;
	vector<ll> a(n);
	vector<ll> b(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>b[i];
	}
	ll ans=0,out=0;
	for(int i=0;i<n;i++)
	{
		ans+=b[i];
		out=max(out,ans);
		if(i!=n-1)
			ans-=r*(a[i+1]-a[i]);
		if(ans<0)
			ans=0;

	}
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