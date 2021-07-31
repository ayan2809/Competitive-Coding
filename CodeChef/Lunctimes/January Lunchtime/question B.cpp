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
		int count=0;
		int a=0,b=0,c=0;
		int d=0,e=0,f=0;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(n==1)
		cout<<0<<endl;
		else if(n==2)
		{
			if(abs(arr[0]-arr[1])%2==0)
			cout<<0<<endl;
			else
			cout<<1<<endl;
		}
		else
		{
			a=0;
			b=1;
			c=2;
			while(c!=n-1)
			{
				d=abs(arr[b]-arr[a]);
				e=abs(arr[c]-arr[b]);	
				if(d%2==0 && c%2==0)
				{
					if(c+2<=n-1)
					{
						a=c;
						b=a+1;
						c=a+2;	
					}
					else
					{
						f=1;
					}	
				}
				else
				{
					count+=1;
					if(c+2<=n-1)
					{
						a=c;
						b=a+1;
						c=a+2;	
					}
					else
					{
						f=1;
					}
				}
				if(f==1)
				break;
			}
			if(abs(arr[n-2]-arr[n-1])%2==0)
			cout<<count<<endl;
			else
			{
				count+=1;
				cout<<count<<endl;
					}		
			
		}
		
		
	}
}
