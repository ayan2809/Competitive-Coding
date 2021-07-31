#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll n=0;
	cin>>n;
	vector<ll> a(n);
	ll maxi=-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		maxi=max(maxi,a[i]);
	}
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans|(a[i]^maxi);
	}
	cout<<maxi<<" "<<ans<<endl;
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