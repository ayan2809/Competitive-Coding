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
	ll n=0;
	cin>>n;
	vector<pair<ll, ll>> a;
	ll x=0;
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(make_pair(x, i));
	}
	ll k=0;
	sort(a.begin(), a.end());
	for(int i=0;i<n;i++)
	{
		if(a[i].first>k)
		{
			a[i].first=k;
			k++;
		}
	}
	map<ll, ll> out;
	for(auto it: a)
	{
		out[it.second]=it.first;
	}
	for(auto it: out)
	{
		cout<<it.second<<" ";
	}
	 cout<<endl;
}
int main(){
	// time_t start, end;
	// time(&start);
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
	// time(&end);
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
 //         << time_taken << setprecision(5);
}