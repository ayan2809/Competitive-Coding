#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
unordered_map<ll, ll> x;
void calculate()
{
    x[0]=0;
    x[1]=1;
    for(ll i=2;i<=2000008;i++)
    {
        x[i]=i*i;
     }

}
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void precompute(ll k)
{
	vector<ll> a;
	ll maxi=2*k+1;
	ll sum=0;
	// for(int i=1;i<=(2*k+1);i++)
	// {
	// 	a.push_back(k+(i*i));
	// }

	// for(int i=0;i<a.size()-1;i++)
	// {
	// 	//cout<<a[i]<<" "<<;
	// 	sum+=gcd(a[i],a[i+1]);
	// }

	for(int i=1;i<maxi;i++)
	{
		sum+=__gcd(x[i]+k,x[i+1]+k);
	}
	cout<<sum<<endl;
}
int main()
{
	IOS;
	calculate();
	ll t=0;
	cin>>t;
	//ll MOD = 1000000007;
	while(t--)
	{
		ll k=0;
		cin>>k;
		precompute(k);
	}

}