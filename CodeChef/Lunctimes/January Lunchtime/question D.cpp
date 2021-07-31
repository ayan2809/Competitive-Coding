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
		int a[n];
		int odd=0,even=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
			even++;
			else
			odd++;
						
		}
		if(odd%2==1)
		cout<<2<<endl;
		else
		cout<<1<<endl;
		
		
	}
}
