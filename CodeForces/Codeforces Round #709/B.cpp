#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
int main()
{
	IOS;
	ll t=0;
	cin>>t;
	ll j=1;
	while(t--)
	{
		ll n=0;
		cin>>n;
		vector<ll> a(n);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll max=-1,min=-1,f=0,maxi=*max_element(a.begin(),a.end());
		if(n<3)
		{
			if(n==2)
			{
				if(a[0]==a[1])
				{
					f=1;
				cout<<0<<endl;
				continue;	
				}
				else
				{
					cout<<-1<<endl;
					continue;
					}	
			}
			else
			{
				cout<<0<<endl;
				continue;
			}
		}
		else if( maxi == a[0])
		{
			cout<<-1<<endl;
			continue;
		}
		else
		{
			for(ll i=0;i<n-1;i++)
		{
			if(a[i+1]>a[i])
			{
				max=a[i+1]-a[i];
			}
			else if(a[i+1]<a[i])
			{
				min=a[i]-a[i+1];
			}
			
			}	
		}
		
		
		if(f==1)
		{
			cout<<0<<endl;
		}
		else if(a[1]!=(a[0]+max)%(min+max))
		{
			//cout
			cout<<-1<<endl;
		}
		else
		{
			cout<<min+max<<" "<<max<<endl;
		}
		
	
	//cout<<"Case #"<<j<<": "<<count<<endl;	
	}
	
	
}
