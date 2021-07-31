#include<bits/stdc++.h>
#define ll long long 
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
const ll mxN=2000000005;
int ans[mxN];
bool prime[mxN];

void precompute()
{
 
vector<ll>vect;
memset(prime, true, sizeof(prime));
 

  for(ll p=2;p*p<mxN;p++){
    if(prime[p]==true){
      for(ll i=p*p;i<mxN;i+=p){
        prime[i]=false;
      }
    }
  }
}


signed main()
{
	fastio;
	precompute();
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll l=0,r=0;
		cin>>l>>r;
		for(ll i=2;i<mxN;i++)
		{
			if(prime[i])
			{
				ll count=0;
				for(ll j=l;j<=r;j++)
				{
					if(j%i!=0)
					count++;
					else
					break;
				}
				if(count==r-l+1)
				{
					cout<<i<<endl;
					break;
				}
				
			}
		}
	}
	return 0;
	
}
