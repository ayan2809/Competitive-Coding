#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
const long long maxi= 1e12+5;
//long long ans[maxi];
unordered_set <long long> cube;
void precompute()
{
	for(long long i=1;i<=maxi;i++)
	{
		cube.insert(i*i*i);
	}
	
}
void solve()
{
	long long n=0;
	cin>>n;
	int f=0;
		for (long long i = 1; i * i * i <= n; i++) {
    		if (cube.count(n - i * i * i)) {
      			cout << "YES\n";
      			f=1;
      			return;
      		}
      	}
      	if(f==0)
      	cout<<"NO"<<endl;
}

int main()
{
	int t=0;
	cin>>t;
	precompute();
	while(t--)
	{
		solve();
		
	}
}
