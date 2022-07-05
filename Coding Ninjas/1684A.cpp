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
	int n=0;
	cin>>n;
	int mini =INT_MAX;
	int maxi = -1;
	int len = (int)log10((double)n) + 1;
	if(len==2)
	{
		cout<<n%10<<endl;
		// while(n!=0)
		// {
		// 	int d=n%10;
		// 	maxi=max(d,maxi);
		// 	n=n/10;
		// }
		// cout<<maxi<<endl;
	}
	else
	{
		while(n!=0)
		{
			int d=n%10;
			mini=min(d,mini);
			n=n/10;
		}
		cout<<mini<<endl;
	}
		
	
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