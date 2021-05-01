#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		ll n=0,m=0,p=0,count=0;
		cin>>n>>m>>p;
		//int count=0;
		vector<vector<ll>> mtrx(n , vector<ll> (m, 0));
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				cin>>mtrx[i][j];
				if(mtrx[i][j]>=p)
					count++;
			}
		}
		if(!count)
		{
			cout<<0<<endl;
			continue;
		}
		vector<vector<ll>> dp(n , vector<ll> (m, 0));

		dp[0][0]= mtrx[0][0];
		//create table part of the function
		for (ll j = 1; j < m; j++) {
		dp[0][j] = mtrx[0][j] +dp[0][j - 1];
			}
	
	// Initialize first coloumn of matrix
		for (ll i = 1; i < n; i++) {
			dp[i][0] = mtrx[i][0] +dp[i - 1][0];
			}
	
	// Initialize rest table with sum
	for (ll i = 1; i < n; i++) {
		for (ll j = 1; j < m; j++) {
			dp[i][j] = mtrx[i][j] +
			dp[i - 1][j] + dp[i][j - 1] -
						dp[i - 1][j - 1];
		}
	}

	for(ll k=2;k<=min(n,m);k++)
	{
	//int count = 0;
	// int subMatSum = 0;
	
	// Loop to iterate over all the
	// possible positions of the
	// given matrix mat[][]
	for (ll i = k - 1; i < n; i++) {
		for (ll j = k - 1; j < m; j++) {
			// if (i == (k - 1) || j == (k - 1)) {
				
			// 	// Condition to check, if K x K
			// 	// is first sub matrix
			// 	if (i == (k - 1) && j == (k - 1)) {
			// 		subMatSum = dp[i][j];
			// 	}
			// 	// Condition to check sub-matrix
			// 	// has no margin at top
			// 	else if (i == (k - 1)) {
			// 		subMatSum = dp[i][j] - dp[i][j - k];
			// 	}
			// 	// Condition when sub matrix
			// 	// has no margin at left
			// 	else {
			// 		subMatSum = dp[i][j] - dp[i - k][j];
			// 	}
			// }
			// // Condtion when submatrix has
			// // margin at top and left
			// else {
			// 	subMatSum = dp[i][j] - dp[i - k][j] -
			// 		dp[i][j - k] + dp[i - k][j - k];
			// }

			ll subMatSum = dp[i][j];
			if(i-k>=0) 
				subMatSum-=dp[i-k][j];
			if(j-k>=0)
				subMatSum-=dp[i][j-k];
			if(j-k>=0 and i-k>=0) 
				subMatSum+= dp[i-k][j-k];
			
			// Increament count, If sub matrix
			// sum is greater than S
			if (subMatSum >= p*k*k) {
				//cout<<subMatSum<<endl;
				count++;
		}
	}
}}


	//uncomment to print the dp table
	// for(int i=0; i<n; i++)
	// {
	// 	for(int j=0; j<m; j++)
	// 	{
	// 	cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	
		cout<<count<<endl;
		
		
	}
}