#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll e=0,k=0,ans=0;
		cin>>e>>k;
		if(k==10)
		{
			ans=log10(e);
		}
		else
		{
		 ans=log(e) / log(k);
		}
		cout<<ans+1<<endl;
	}
}