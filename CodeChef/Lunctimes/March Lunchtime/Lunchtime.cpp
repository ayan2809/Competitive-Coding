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
		vector <ll> a(n);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		vector <ll> ans(n);
		for(ll i=0;i<n;i++)
		{
			for(ll j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					ans[i]++;
					ans[j]++;
				}
				else if(a[j]>a[i])
				{
					break;
				}
			}
		}

		for(ll i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		// for(ll i=0;i<n;i++)
		// {
		// 	ll f=0;
		// 	ll k=0,g=0;
		// 	for(ll j=i+1;j<n;j++)
		// 	{
		// 		if(a[i]==a[j])
		// 		{
		// 			f=1;
		// 			break;
		// 		}
		// 		else if(a[j]>a[i])
		// 		{
		// 			k=1;
		// 			break;
		// 		}
		// 	}
		// 	for(ll j=i-1;j>=0;j--)
		// 	{
		// 		if(a[i]==a[j])
		// 		{
		// 			f=1;
		// 			break;
		// 		}
		// 		else if(a[j]>a[i])
		// 		{
		// 			g=1; 
		// 			break;
		// 		}
		// 	}
		// 	//cout<<f<<k<<endl;
		// 	if(f==1 && k==0 || f==1 && g==0)
		// 		cout<<1<<" ";
		// 	else if(k==1 || f==0)
		// 	{
		// 		cout<<0<<" ";
		// 	}
			
		
		cout<<endl;
	}
}