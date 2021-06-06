#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n=0;
		cin>>n;
		ll x=1e9+7,pos=-1;
		vector<ll> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<x) x=a[i],pos=i;
		}
		cout<<n-1<<endl;
		for(int i=0;i<n;i++)
		{
			if(i==pos)
				continue;
			cout<<pos+1<<" "<<i+1<<" "<<x<<" "<<x+abs(i-pos)<<endl;
		}

	}
}