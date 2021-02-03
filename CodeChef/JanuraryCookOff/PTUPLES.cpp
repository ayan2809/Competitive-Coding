#include<bits/stdc++.h>
using namespace std;
const int mxN=1e6+5;
int ans[mxN];
vector <int> prime(mxN);

void precompute()
{
	for(int i=0;i<mxN;i++)
	{
		prime[i]=true;
	}
	prime[0]=false;
}

void function(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	for(int p=2;p*p<=n;p++)
	{
		if(prime[p]==true)
		{
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}
int main()
{
	int n=0;
	cout<<"Enter the value of n:";
	cin>>n;
	function(n);
}
