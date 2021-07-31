#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
void solve()
{
	ll n=0,q=0,m=0;
	cin>>n>>q;
	vector<ll> a(n);
	vector<int> bitsCount(32);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		//cout<<(0|a[i])<<endl;
		for (int j = 0; j < 31; j++) {
            if ((a[i] >> j) & 1) {
                bitsCount[j]++;
            }
		m = m | a[i];
		}
	}
	cout<<m<<endl;
	while(q--)
	{
		ll x=0,v=0;
		cin>>x>>v;
		//a[x-1]=v;
		// ll ans=0;
		// for(auto it: a)
		// {
		// 	ans=ans| it;
		// }
		//cout<<ans<<endl;
		x--;
		//removing the old value;
		for(int j=0;j<31;j++)
		{
			if((a[x]>>j) & 1)
			{
				bitsCount[j]--;
			}
		}

		//adding new value;

		a[x]=v;
		for(int j=0;j<31;j++)
		{
			if((a[x]>>j) & 1)
			{
				bitsCount[j]++;
			}
		}

		//and then calculating the new value
		ll ans=0;
		for(int i=0;i<31;i++)
		{
			ans+=(1<<i)*(bitsCount[i]>=1);
		}		
		cout<<ans<<endl;

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