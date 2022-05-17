#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
int mod(int a, int b)
{ 
	return (a%b+b)%b; 
}
void solve()
{
	int n=0,m=0;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	// cout<<(-1)%4<<endl;
	int maxi=INT_MIN;
	for(int i=n-1;i>=1;i--)
	{
		// for(int j=0;j<n;j++)
		// {
			int x=0;
			int z=a[i]+a[i];
			if(a[i]==a[i-1])
			{
				x=a[i]+a[i-1];
			}
			else
			{
				x=a[i]+a[i-1]+(mod((a[i]-a[i-1]),m));
				int y=a[i]+a[i-1]+(mod((a[i-1]-a[i]),m));
				x=max(x,y);
				x=max(x,z);
			}
			maxi=max(maxi,x);
		// }
	}
	// for(auto it: a)
	// {
	// 	maxi=max(maxi, it+it);
	// }
	cout<<maxi<<endl;
}
int main(){
	// time_t start, end;
	// time(&start);
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
	// time(&end);
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
 //         << time_taken << setprecision(5);
}