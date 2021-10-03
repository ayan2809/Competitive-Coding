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
	vector<int> task(n);
	vector<int> k(n);
	for(int i=0;i<n;i++)
	{
		cin>>task[i];	
	}
	for(int i=0;i<n;i++)
	{
		cin>>k[i];	
	}
	vector<int> ans;
	map<int, int> umap;
	for(int i=0;i<n;i++)
	{
		umap[task[i]]=i;
		int g= k[i];
		map<int, int> :: iterator it;
		it= next(umap.begin(),(g-1));
		ans.push_back(it->first);
	}
	for(auto it: ans)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}
int main(){
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
}