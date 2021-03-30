#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define int long long
signed main()
{
	IOS;
	int t=0;
	cin>>t;
	while(t--)
	{
	 int n=0,m=0,k=0;
	 cin>>n>>m>>k;
	 int out=0;
	 for(int i=1;i<=n;i++)
	 {
	 	if(min(i,m)%2==1)
	 	{
	 		out = out^(k+i+1);
	 	}
	 }
	 for (int j=2;j<=m;j++)
	 {
	 	if(min(n,m-j+1)%2==1)
	 		{
	 			out^=k+n+j;
	 		}
	  }
	  cout<<out<<endl;
	 
	 
	}
	return 0;
	
}
