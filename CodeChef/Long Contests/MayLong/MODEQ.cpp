#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define ll long long


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
	ll n=0,m=0;
	cin>>n>>m;
		ll count=0;

		if(m==1){
		 	ll g=n-2;
		 	count+=(g*(g+1))/2;
		 	cout<<count+(n-1)<<endl;
		 	return;
		 	
		 }
		// else{

		// 	for(ll i=2;i<n;i++)
		// 	{
		//  	 if(m<i&&m<n)
		//  	 {
		//  	 	count+=n-i;
		//  	 	continue;
		//  	 }
  //      		else  if(m==i&&m<n)
  //      			{
  //      				count+=n-i;
  //      				continue;
  //      			}
  //       	else if(i<m&&n==m)
  //       	{
  //       		continue;
  //       	}
  //     		else
  //     		{
  //         		for(ll j=i+1;j<=n;j++)
  //     			{
  //          		if((m%i)%j==(m%j)%i)
  //          			{
  //          				count++;
  //          			}
  //     				}
          
  //     		}
		// }

		 vector<ll> a(n+1,1);
		 for(ll i=2;i<=n;i++)
		 {
		 	ll check=m%i;
		 	count=count+a[check];
		 	for(ll j=check;j<=n;j+=i)
		 	{
		 		a[j]++;
		 	}
		 }
		 cout<<count<<endl;
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
		//cout<<count<<endl;
}