#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n=0,k=0;
		cin>>n>>k;
		ll maxi=pow(2,n)-1;
		ll answer=0;
		if(k<=(maxi+1)/2)
			answer=2*(k*maxi);
		else
			answer=2*((maxi+1)/2)*maxi;
		cout<<answer<<endl;
	}
}