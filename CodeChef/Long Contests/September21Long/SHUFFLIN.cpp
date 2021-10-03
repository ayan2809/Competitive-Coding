#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void solve()
{
	int n=0;
	cin>>n;
	vector<ll> a(n);
	ll even=0,odd=0,c=0,d=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			even++;
			continue;
		}
		odd++;
	}
	c=d=n/2;
	if(n%2==1)
		d++;
	cout<<min(d, even)+min(c, odd)<<endl;
}
int main(){
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
}