#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=arr[i];
	
	if(sum%2!=0)
	return false;
	
	bool dp[sum/2+1][n+1];
	
	for(int i=0;i<=n;i++)
	{
		dp[0][i]=true;
	}
	for(int j=1;j<=sum/2;j++)
	dp[j][0]=false;
	
	for(int i=1;i<=sum/2;i++)
	{
		for(int j=1;j<=n;j++)
		{
			dp[i][j]=dp[i][j-1];
			if(i>=arr[j-1])
			{
				dp[i][j]=dp[i][j] || dp[i-arr[j-1]][j-1];
			}
		}
	}
	return dp[sum/2][n];
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(check(arr,n)==true)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
}
