#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll x=0;
		cin>>x;
		ll d=x%14;
		ll k=floor(x/14);
		//cout<<d<<" "<<k<<endl;
		if(d>=1 && d<=6 && k>=1)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}