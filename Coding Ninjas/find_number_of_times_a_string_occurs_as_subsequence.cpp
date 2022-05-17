#include<bits/stdc++.h>
using namespace std;
int count(string a, string b, int m, int n)
{
	if((m==0 && n==0) || n==0)
		return 1;
	if(m==0)
		return 0;
	if(a[m-1]==b[n-1])
		return count(a, b, m-1, n-1)+count(a, b, m-1, n);
	else
		return count(a, b, m-1, n);
}
int countdp(string a, string b, int m, int n, vector<vector<int>> &dp)
{
	if((m==0 && n==0) || n==0)
		return 1;
	if(m==0)
		return 0;
	if(dp[m][n]!=-1)
		return dp[m][n];

	if(a[m-1]==b[n-1])
		return dp[m][n]=count(a, b, m-1, n-1,dp)+count(a, b, m-1, n,dp);
	else
		return dp[m][n]=count(a, b, m-1, n);
}
int main()
{
	string a="",b="";
	cin>>a>>b;
	cout<<count(a, b, a.size(), b.size())<<endl;
	vector<vector<int> > dp(a.size() + 1, vector<int>(b.size() + 1, -1));
	cout<<countdp(a,b,a.size(), b.size(), dp);

}