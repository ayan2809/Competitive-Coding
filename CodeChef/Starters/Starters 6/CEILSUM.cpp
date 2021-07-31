#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		ll a=0,b=0,k=0,ans=0;
		cin>>a>>b;
		if(a==b)
			{cout<<0<<endl;
				continue;
			}
		else if(a>b)
		{
			k=a-1;
			//ans=ceil(double(a-k)/2)+ceil(double(k-b)/2);
		}
		else
		{
			k=a+1;
			
		}
		ans=ceil(double(b-k)/2)+ceil(double(k-a)/2);
		cout<<ans<<endl;
	}
}