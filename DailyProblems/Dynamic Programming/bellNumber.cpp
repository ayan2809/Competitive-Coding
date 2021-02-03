#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
	int bell[n+1][n+1];
	bell[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		bell[i][0]=bell[i-1][i-1];
		for(int j=1;j<=i;j++)
		{
			bell[i][j]=bell[i-1][j-1]+bell[i][j-1];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<bell[i][j]<<" ";
		}
		cout<<endl;
	}
	return bell[n][0];
}
int main()
{
	int n=0;
	cout<<"Enter the number :";
	cin>>n;
	cout<<"The bell number is :"<<solve(n);
	
}
