#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
int n=1001;
int a[1001][1001];
void precompute()
{
	int cur = 1;
	for (int sm = 0; sm <= (n-1)+(n-1); sm++)
		for (int row = 0; row < n; row++){
			int col = sm - row;
			if (0 <= col && col < n)
				a[row][col] = cur++;
		}
}
void solve()
{
	int x1=0,x2=0;
	int y1=0,y2=0;
	cin>>x1>>y1>>x2>>y2;

	ll sum=0;
	// while((i!=x2-1) && (j!=y2-1))
	// {
	// 	if(i==x2-1 && j==y2-1)
	// 	{
	// 		//sum+=a[i][j];
	// 		//cout<<1<<endl;
	// 		break;
	// 	}
	// 	if(i==x2-1)
	// 	{
	// 		j++;
	// 	}
	// 	if(j==y2-1)
	// 	{
	// 		i++;
	// 	}
	// 	else if(a[i+1][j]>a[i][j+1])
	// 	{
	// 		i=i+1;
	// 	}
	// 	else if(a[i+1][j]<a[i][j+1])
	// 	{
	// 		j=j+1;
	// 		//sum+=a[i][j+1];
	// 	}
		
	// 	cout<<i<<" "<<j<<endl;
	// 	sum+=a[i][j];
	// }
	// //sum+=a[x2][y2];
	// cout<<sum<<endl;
	for(int i=x1-1;i<x2;i++)
	{
		sum+=a[i][y1-1];
	}
	for(int i=y1;i<y2;i++)
	{
		sum+=a[x2-1][i];
	}
	cout<<sum<<endl;


}
int main()
{
	IOS;
	precompute();
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
}