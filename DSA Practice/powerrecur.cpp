#include<bits/stdc++.h>
using namespace std;
int power(int n,int r)
{
	if(r==0)
		return 1;
	else
	{
		return(power(n,r-1)*n);
	}
}

int main()
{
	int n=0;
	cin>>n; 
	int m=0;cin>>m; 
	cout<<power(n,m);
}