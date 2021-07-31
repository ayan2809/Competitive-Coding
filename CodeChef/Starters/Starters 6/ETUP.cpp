#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n=0,q=0;
		cin>>n>>q;
		vector<ll> input(n);
		vector<ll> check(n+1);
		check[0]=0;
		ll f=0;
		for(ll i=1;i<=n;i++)
		{	
			cin>>input[i-1];
			if(input[i-1]%2==0)
				f++;
			check[i]=f;
		}
		// for(auto it: check)
		// 	cout<<it<<" ";
		while(q--)
		{
			ll l=0,r=0;
			cin>>l>>r;
			ll even=check[r]-check[l-1];
			ll odd=(r-l+1)-even;
			ll ans=(even * (even - 1) * (even - 2)) / 6 + (odd * (odd - 1) / 2) * even;
			cout<<ans<<endl;
		}
	}
}