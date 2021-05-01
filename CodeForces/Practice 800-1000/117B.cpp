#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool ex[2];
int main()
{
	int n=0;
	cin>>n; 
	vector<ll> a(n);
	for(int i=0;i<n*2;i++)
	{
		cin>>a[i];
		ex[a[i]%2]=1;
	}
	if(ex[0] && ex[1])
	sort(a.begin(),a.end());
	
		for(int i=0;i<n;i++)
		{
		cout<<a[i]<<" ";
		}
}