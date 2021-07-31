#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
	ll t=0;
	cin>>t; 
	while(t--)
	{
		ll n=0,k=0,odd=0,even=0;
		cin>>n>>k;
		vector<ll> a(n);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
				even++;
			else
				odd++;
		}
		
		sort(a.begin(),a.end());
		// int result=0;
		// if(odd!=0)
		//   result=ceil(double(odd)/double(k));
		// cout<<result<<endl;
		// for(ll i=0;i<n;i++)
		// {
		// 	cin>>a[i];
		// 	if(a[i]%2!=0)
		// 		a[i]=a[i]-1;
		// }
		// while(a[a.size()-1]!=0)
		// {

		// 	a[i]=a[i]^pow(2,p);
		// }

		int maxi=a[a.size()-1];
		int power=floor(log2(maxi));
		cout<<power<<endl;
		int count=0,powe=pow(2,power);
		while(*max_element(a.begin(),a.end())!=0)
		{
			count++;
			k1=k;
			powe=pow(2,power);
			for(int i=n-1;i>=0;i--)
			{
				if(k1==0)
					break;
				if(a[i]!=0)
					{
						a[i]=a[i]^powe;
						k1--;
					}
			}

		}
		cout<<count<<endl;
	}
}