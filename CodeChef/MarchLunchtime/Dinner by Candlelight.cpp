#include<bits/stdc++.h>
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;
#define ll long long
int main()
{
	fast_cin();
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll a=0,y=0,x=0;
		cin>>a>>y>>x;
		ll ans=0;
		if(y>a)
		{
			cout<<a*x+1<<endl;
		}
		else if(y<=a)
		{
			cout<<y*x<<endl;
		}
		//cout<<ans<<endl;
	}
}