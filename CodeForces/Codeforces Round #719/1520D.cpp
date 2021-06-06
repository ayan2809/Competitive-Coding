#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll countPairs(ll arr[], ll n)
{
  
    // To store the frequencies
    // of (arr[i] - i)
    unordered_map<ll, ll> map;
    for (ll i = 0; i < n; i++)
        map[arr[i] - i]++;
  
    // To store the required count
    ll res = 0;
    for (auto x : map) {
        ll cnt = x.second;
  
        // If cnt is the number of elements
        // whose differecne with their index
        // is same then ((cnt * (cnt - 1)) / 2)
        // such pairs are possible
        res += ((cnt * (cnt - 1)) / 2);
    }
  
    return res;
}

int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n=0;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}

		cout << countPairs(a, n)<<endl;

		// int c=0;
		// for(int i=0;i<n;i++)
		// {
		// 	for(int j=i+1;j<n;j++)
		// 	{
		// 		if((a[j]-a[i])==(j-i))
		// 		{
		// 			c++;
		// 		}
		// 	}
		// }
		// cout<<c<<endl;
	}
}