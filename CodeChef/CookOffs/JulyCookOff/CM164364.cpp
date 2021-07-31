#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
void solve()
{
	ll n=0,x=0,m=0,sum=0;
	cin>>n>>x;
	map<ll, ll> umap;
	for(ll i=0;i<n;i++)
	{
		cin>>m;
		umap[m]+=1;
		if(umap[m]>1)
			sum++;
	}
	ll k=umap.size();
	if(x<=sum)
	{
		cout<<k<<endl;
	}
	else
	{
		cout<<k-(x-sum)<<endl;
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