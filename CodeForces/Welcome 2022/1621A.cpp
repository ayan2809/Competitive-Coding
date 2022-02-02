#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void solve()
{
	int n=0,k=0;
	cin>>n>>k;
	int x=1,y=1,g=k;
	while(k>0)
	{
		if(x>n || y>n)
		{
			cout<<-1<<endl;
			return;
		}
		k--;
		x+=2;
		y+=2;
	}
	x=1;
	y=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==x && j==y && g>0)
			{
				cout<<"R";
				x+=2;
				y+=2;
				g--;
			}
			else
			{
				cout<<".";
			}
		}
		cout<<endl;
	}
}
int main(){
	time_t start, end;
	time(&start);
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
	time(&end);
	double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
 //         << time_taken << setprecision(5);
}