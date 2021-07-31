#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxi 100000
int main()
{
	ll t=0;
	int ans[9];
	cin>>t;
	ans[0]=0;
	ans[1]=20;
	ans[2]=36;
	ans[3]=51;
	ans[4]=60;
	ans[5]=76;
	ans[6]=88;
	ans[7]=99;
	ans[8]=104;
	while(t--)
	{
		ll n=0;
		cin>>n;
		if(n<=8)
		{
			cout<<ans[n]<<endl;
		}
		else
		{
			cout<<ans[n%4]+(n/4-1)*44 +(4-n%4)*15+(n%4)*11<<endl;
		}
	}
}