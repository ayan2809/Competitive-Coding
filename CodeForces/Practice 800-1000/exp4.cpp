#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		ll n=0,k=0;
		cin>>n>>k;
		ll g=0;
		ll sum=0;
		while(n!=0)
		{
			g=n%k;
			if(g==0)
			{
				n/=k;
				sum++;
			}
			else
			{
				sum+=g;
				n-=g;
			}
		}
		cout<<sum<<endl;
	}
}
