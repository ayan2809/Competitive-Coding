#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
	int coin[]={1,5,10,20,100};
	 int len = sizeof(coin)/sizeof(coin[0]);
	int dp[len+1][n+1];
	for(int i=0;i<=len;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
			dp[i][j]=INT_MAX-1;
			else if(j==0 && i!=0)
			{
				dp[i][j]=0;
			}
			if(i==1)
			{
				 if(j%coin[0]==0)
				 {
				 	dp[i][j]=j/coin[0];
				 }
				 else
				 {
				 	dp[i][j]=INT_MAX-1;
				 }
			}
		}
	}
	for(int i=2;i<=len;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(coin[i]<=j)
			{
				dp[i][j]=min(dp[i][j-coin[i-1]+1],dp[i-1][j]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	return dp[n][0]; 
}
int main()
{
	int n=0;
	cin>>n;
	cout<<solve(n);
	
}
