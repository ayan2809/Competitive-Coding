#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
ll number(ll n)
{
	ll sum=0;
	while(n!=0)
	{
		int d=n%10;
		sum+=d;
		n=(ll)n/10;
	}
	return sum;

}
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n=0;
		cin>>n;
		ll m=number(n);
		ll k=0;//<<endl;
		while(k<2)
		{
			m=number(n);
			k=gcd(n,m);
			n=n+1;
		}
		cout<<n-1<<endl;
	}
}