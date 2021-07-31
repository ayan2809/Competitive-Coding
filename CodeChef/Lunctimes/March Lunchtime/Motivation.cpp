#include<bits/stdc++.h>
using namespace std; 
#define ll long long
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll x=0,n=0;
		cin>>n>>x;
		ll max1=0;
		ll s=0,r=0;
		for(ll i=0;i<n;i++)
		{
			cin>>s>>r;
			if(r>max1 && s<=x)
			{
				max1=r;
			}
		}
		cout<<max1<<endl;
	}
}