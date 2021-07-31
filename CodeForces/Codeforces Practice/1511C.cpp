#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front

// void solve()
// {
// 	cout<<1<<endl;
// }
int main(){
	IOS;
	ll n=0,q=0,x=0;
	cin>>n>>q;
	unordered_map <int,int> umap;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		umap[x]=i;
	} 
	for(int i=0;i<q;i++)
	{
		int t=0;
		cin>>t;
		int pos=umap.find(t);
		umap[t]=1;
	}
	// for(int i=0;i<a.size();i++)
	// {

	// }
}