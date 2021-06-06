#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<long,long>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;

void solve()
{

}
int main()
{
	IOS;
	ll n=0,m=0,k=0;
	cin>>n>>m>>k;
	vector<ll> a(n);
	vector<ll> b(m);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll maxi=*max_element(a.begin(),a.end())+k;
	ll mini=*min_element(a.begin(),a.end())-k;
	ll count=0;
	for(ll i=0;i<m;i++)
	{
		cin>>b[i];
		// if(b[i]>=mini && b[i]<=maxi)
		// {
		// 	count++;
		// 	//b[i]=-5;
		// }
	}
	ll maxi2=*max_element(b.begin(),b.end());
	ll mini2=*min_element(b.begin(),b.end());

	for(ll i=0;i<n;i++)
	{
		ll maxi3=a[i]+k;
		ll mini3=a[i]-k;
		for(ll j=0;j<m;j++)
		{
			if(b[j]>=mini3  && b[j]<=maxi3)
			{
				count++;
				b[j]=-k-1;
				break;
			}
		}
	}
	
	//cout<<maxi<<" "<<mini<<endl;
	
	
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	cout<<count<<endl;
}