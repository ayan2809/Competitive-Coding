#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
ll gcd(ll x, ll y)
{
	if(x==0)
		return y;
	return gcd(y%x,x);
}
void solve()
{
	ll x=0,y=0;
	cin>>x>>y;
	ll temp1=min(x,y);
	ll temp2= max(x,y);
	x=temp1;
	y=temp2;
	if(y%x==0)
	{
		cout<<0<<endl;
		return;
	}
	ll k1=ceil((double)y/(double)x);
	// int ans=(k*x)-y;
	//ll k2= floor((double)y/(double)x);

	ll ans=0;
	if(gcd(x,y)>1)
	{
		cout<<0<<endl;
	}
	else if(gcd(x+1,y)>1 || gcd(x,y+1)>1)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<2<<endl;
	}
	// while(k!=0)
	// {
	// 	k=y%x;
	// 	if(k==0)
	// 		break;
	// 	if(y%(x+1)==0)
	// 	{
	// 		x=x+1;
	// 		ans++;
	// 		continue;
	// 	}
	// 	y+=k;
	// 	ans+=k;

	// }
	//cout<<ans<<endl;
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