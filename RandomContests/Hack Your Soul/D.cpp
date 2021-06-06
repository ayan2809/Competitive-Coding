#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;

int main()
{
	IOS;
	ll n=0;
	cin>>n;
	ll count=0;
	vector<ll> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i>0)
		{
			if(a[i]<a[i-1])
			{
				count+=a[i-1]-a[i];
				a[i]+=a[i-1]-a[i];
			}
		}
	}
	cout<<count<<endl;
}