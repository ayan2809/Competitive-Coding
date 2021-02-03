#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
	int catalan[n+1];
	catalan[0]=catalan[1]=1;
	for(int i=2;i<=n;i++)
	{
		catalan[i]=0;
		for(int j=0;j<i;j++)
		{
			catalan[i]+=catalan[j]*catalan[i-j-1];
		}
		
	}
	return catalan[n];
}
int main()
{
//	int n=0;
//	cin>>n;
	for(int i=0;i<10;i++)
	{
		cout<<solve(i)<<" ";
	}
}
