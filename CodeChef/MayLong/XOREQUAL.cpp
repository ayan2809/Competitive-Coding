// C++ program to find
// (a^b)%m for b very large.
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// Function to find power
ll power(ll x, ll y, ll p)
{
	ll res = 1; // Initialize result

	// Update x if it is more than or
	// equal to p
	x = x % p;

	while (y > 0) {
	
		// If y is odd, multiply x
		// with the result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}
// Driver Code
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll a = 2;

	// String input as b is very large
		int num=0;
		//= "100000000000000000000000000";
		cin>>num;
		num=num-1;
		string b;
		stringstream ss;  
  		ss << num;  
  		ss >> b;  

		ll remainderB = 0;
		ll MOD = 1000000007;

	// Reduce the number B to a small number
	// using Fermat Little
	for (int i = 0; i < b.length(); i++)
		remainderB = (remainderB * 10 +
					b[i] - '0') % (MOD - 1);

	cout << power(a, remainderB, MOD) << endl;
	}
	
	return 0;
}
