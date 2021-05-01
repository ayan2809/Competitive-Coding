#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	cin>>n; 
	vector<int> a(2*n);
	for(int i=0;i<n*2;i++)
	{
		cin>>a[i];
		//cout<<a[i];
	}
	sort(a.begin(),a.end());
	int k1=0,k2=0;
	for(int i=0;i<n;i++)
	{
		k1+=a[i];
		k2+=a[i+n];
	}
	if(k1==k2)
	{
		cout<<-1<<endl;
	}
	else
	{
		//cout<<a<<endl;
		for(int i=0;i<n*2;i++)
		{
		cout<<a[i]<<" ";
		}
	}
}