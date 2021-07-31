#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll a=0,b=0,c=0;
	cin>>a>>b>>c;
	ll zero=0;
	if(a==0)
		zero++;
	if(b==0)
		zero++;
	if(c==0)
		zero++;

	if(zero==3 || zero==0)
		cout<<0<<endl;
	else
		cout<<1<<endl;
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