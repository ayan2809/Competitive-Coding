#include<bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		
		ll n=0;
		cin>>n;
		vector <ll> a(n);
		set <ll> b;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			b.insert(a[i]);
		}
		ll k=0,coun=0;
		//set<ll, greater<ll> >::iterator it;
		for( auto it=b.begin();it!=b.end();it++)
		{
			//ll g=*it;
			k=count(a.begin(),a.end(),*it);
			cout<<k<<" "<<*it<<endl;
			if(k<*it)
			{
				coun+=k;		
			}
			else if(k>*it)
			{
				coun+=(k-*it);
			}
		}
		cout<<coun<<endl;
		
	}
}
