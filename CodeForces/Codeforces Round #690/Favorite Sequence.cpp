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
		long long int m=0;
		vector <long long int> a;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			a.push_back(m);
		}
		long long int b[n];
		int k=n-1;
		int f=0;
		//cout<<f<<" "<<k<<endl;
		for(int i=0;i<n;i++)
		{
			if((i+1)%2==0)
			{
				b[i]=a[k];
				k--;
			}
			else
			{
				b[i]=a[f];
				f++;
			}
			
			
			//cout<<a[i]<<" "<<a[i+1]<<endl;
			
			
		}
		//cout<<f<<" "<<k<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
		
	}
}
