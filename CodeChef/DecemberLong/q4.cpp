#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,k=0;
		cin>>n>>k;
		if(n==k)
		{
			for(int i=1;i<=n;i++)
			cout<<i<<" ";
		}
		else
		{
			vector <int> a;
			int count=0;
			if(n%2==0)
			{
				for(int i=1;i<n+1;i++)
				{
					if(i%2==0)
					{
						count++;
					a.push_back(i);	
					}
					else
					a.push_back(-i);
				}
			}
			else
			{
				for(int i=1;i<n+1;i++)
				{
					if(i%2!=0)
					{
						count++;
						a.push_back(i);
					}
					else
					{
						//count++;
						a.push_back(-i);
					}
				}
			}
			int sum=0,m=1;
			//cout<<count<<endl;
			for(int i=0;i<n;i++)
			{
				sum+=a[i];
				if(sum>0)
				{
					if(count<k)
					{
						int diff=k-count;
						int g=n-1;
						while(g!=0)
						{
							if(a[g]<0)
							{
								count=count+1;
								a[g]=abs(a[g]);
								diff--;
							}
							if(diff==0)
							break;
							g--;
							
						}
					}
				
				if(count>k)
					{
						int diff=count-k;
						int g=n-1;
						while(g!=0)
						{
							if(a[g]>0)
							{
								count=count-1;
								a[g]=-(a[g]);
								diff--;
							}
							if(diff==0)
							break;
							g--;
							
						}
					}
				if(count==k)
				{
					break;
				}
				}
			}
			//cout<<count<<" "<<k<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
					
		}
		cout<<endl;
	}
	
	
}
