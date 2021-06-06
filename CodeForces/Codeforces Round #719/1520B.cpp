#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll count_same_digit(ll L, ll R)
{
    ll tmp = 0, ans = 0;
  
    // length of R
    ll n = log10(R) + 1;
  
    for (ll i = 0; i < n; i++) {
  
        // tmp has all digits as 1
        tmp = tmp * 10 + 1;
  
        // For each multiple
        // of tmp in range 1 to 9,
        // check if it present
        // in range [L, R]
        for (ll j = 1; j <= 9; j++) {
  
            if (L <= (tmp * j)
                && (tmp * j) <= R) {
  
                // Increment the required count
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n=0;
		ll L=1;
		cin>>n;
		cout<<count_same_digit(L, n)<< endl;
	}
}