#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
int solve()
{
	int n=0,m=0,c=0,r=0,count=0;
	cin>>n>>m>>c>>r;
	int ans=2;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char ch=0;
			cin>>ch;
			if(ch=='B')
			{
				count++;
				if(i==c && j==r)
					ans=min(ans,0);
				else if((i==c && j!=r) || (i!=c && j==r))
				{
					ans=min(ans,1);
					// return 1;
				}
			}
		}
		// cout<<endl;
	}
	if(count==0)
	return -1;
	return ans;
}
int main(){
	time_t start, end;
	time(&start);
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		cout<<solve()<<endl;
	}
	time(&end);
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
         // << time_taken << setprecision(5);
}