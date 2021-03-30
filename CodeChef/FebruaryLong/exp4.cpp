#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		i+=1;
		cin>>a[i];
	}
	for(int i=0;i<n+2;i++)
	cout<<a[i]<<" ";
	
	
}
