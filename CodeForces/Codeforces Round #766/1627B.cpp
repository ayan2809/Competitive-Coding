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
	int n=0,m=0;
	cin>>n>>m;
	vector<int> ans;
	// considering the optimal place for 
	// tina to sit is 0,0 or n,n
	// thus we find the distance from there
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			ans.push_back(max(i,n-i-1)+max(j,m-j-1));
		}
	}		
	sort(ans.begin(), ans.end());
	for(auto it: ans)
		cout<<it<<" ";
	cout<<endl;
	
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
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
 //         << time_taken << setprecision(5);
}