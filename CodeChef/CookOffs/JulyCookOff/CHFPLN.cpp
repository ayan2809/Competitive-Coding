#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll n=0;
	cin>>n;
	map<ll,ll>umap;
	ll m=0;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		umap[m]+=1;
	}

	ll ans=0;
	for(auto it:umap)
	{
		ll k=0,check=0;
		check=it.first-1;
		if(it.second<=check)
		{
			ans+=it.second;
		}
		else
		{
			ans+=check;
		}
	}
	cout<<ans<<endl;

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