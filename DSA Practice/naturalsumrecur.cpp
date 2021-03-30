#include<bits/stdc++.h>
using namespace std;
int natural(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return natural(n-1)+n;
	}
}
int main()
{
	int n=0;
	cin>>n; 
	cout<<natural(n);
}