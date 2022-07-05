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
	int ans=0;
	map<int, int> umap;
	for(int i=0;i<n;i++)
	{
		int x=0;
		cin>>x;
		if(x%2!=0)
		{
			ans=1;
			if((x-1)!=0)
				umap[x-1]+=1;
		}
		else if(x!=0)
		{
			umap[x]+=1;
		}
	}
	for(auto it: umap)
	{
		ans++;
	}
	cout<<ans<<endl;
	// cout<<max(a,max(b, max(c,d)))<<endl;
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