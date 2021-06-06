#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n=0,m=0;

	cin>>n>>m;
		vector<ll>a(n);
		for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll diff=0;
	for(int i=0;i<n;i++)
	{
		diff=abs(a[i]-a[i+1]);
		if(diff<m)
		{
			cout<<"NO";
			break;
		}
		else
		{

			a[i]=a[i+1]-a[i];
		}
	}
}