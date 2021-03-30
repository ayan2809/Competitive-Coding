#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int j=1;
	while(t--)
	{
		int n=0,b=0;
		cin>>n>>b;
		vector <int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		long long sum=0;
		int count=0;
		int i=0;
		for(int i=0;i<n;i++)
		{
			if(b>=a[i])
			{
				count++;
				b-=a[i];
			}
			else
			{
				break;
			}
		}
		cout<<"Case #"<<j<<": "<<count<<endl;
		j++;
	}
	
}
