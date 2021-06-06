#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll a=0,b=0;
		cin>>a>>b;
		if(b==1)
		{
			cout<<"NO"<<endl;
		}		
		else
		{
			cout<<"YES"<<endl;
			cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
		}
	}
}