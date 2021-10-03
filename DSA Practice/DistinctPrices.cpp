#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define endl "\n"
void solve()
{
	ll n=0, k=0,x=0,g=0;
	cin>>n>>k>>x;
	set<ll> a;
	for(ll i=0;i<n;i++)
	{
		cin>>g;
		a.insert(g);
	} 
	ll ans= x* (a.size()-k);
	cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	time_t start, end;
	time(&start);
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
	time(&end);
	double time_taken = double(end - start);
	cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
}