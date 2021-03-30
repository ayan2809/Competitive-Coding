#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		vector<long long> a(n);
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		int i=0;
		while(i!=n)
		{
			if(a[i]>=a[i+1])
			{
				a[i]--;
				a[i+1]++;
				continue;	
			}	
			else
			{
				i++;
			}
		
		}
			for(int j=0;j<n;j++)
				cout<<a[j]<<" ";	
		
	
	}
}
