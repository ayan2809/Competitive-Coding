#include<bits/stdc++.h>
using namespace std;
int recur(int a,int b,int m,int n,int c)
{
	
	if(n==0 && m==0)
	{
		return c;
	}

	if(n>0 && m>0)
	{
		recur(a,b,n-1,m-1,c*a*b);
	}
	if(n>0 && m==0)
	{
		recur(a,b,n-1,m,c*b);
	}
	if(n==0 && m>0)
	{
		recur(a,b,n,m-1,c*a);
	}
	
}
int main()
{
	int a=0,b=0,n=0,m=0,c=1;
	cin>>a>>b>>m>>n;
	cout<<recur(a,b,m,n,c);

}
