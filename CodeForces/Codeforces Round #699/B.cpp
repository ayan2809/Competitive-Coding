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
		vector<int> a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		int st=0;
		for(int i=1;i<=k;i++)
		{
			//,end=1;
			st=0;
			while(st<=n-1)
			{
			if(a[st]>=a[st+1])
			{
				st=st+1;
				
			}
			else if(a[st]<a[st+1])
			{
				a[st]=a[st]+1;
				break;
			}
			}
			if(st==n-1)
			break;
			
		}
		if(st==n-1)
			cout<<-1<<endl;
			else
			cout<<st+1<<endl;
	}
}
