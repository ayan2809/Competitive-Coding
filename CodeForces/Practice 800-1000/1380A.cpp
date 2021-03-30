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
		vector<int> a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		int f=0;
		for(int i=n-1;i>=2;i--)
		{
			if(a[i]<a[i-1] && a[i-1]>a[i-2])
			{
				cout<<"YES"<<endl;
				cout<<i-1<<" "<<i<<" "<<i+1<<endl;
				f=1;
				break;
			}
			//break;
		}
		if(f==0)
		cout<<"NO"<<endl;
		
	}
}
