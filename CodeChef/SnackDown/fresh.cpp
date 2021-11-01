#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.second < b.second;
}
void addEdge(vector<ll> adj[], ll u, ll v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<ll> adj[], ll V)
{
    for (ll v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
             cout<<adj[v].size()<<endl;
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
}
void solve()
{
	ll n=0,m=0,x=0,y=0;
	cin>>n>>m;
    vector<ll> adj[n];
	map<ll, ll> umap;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		if(x==y)
			continue;
		addEdge(adj, x-1,y-1);
	}
	ll V=n;
	vector<pair<ll, ll>> a;
	for (ll v = 0; v < V; ++v)
    {
        umap[v]=adj[v].size();//<<endl;
        a.push_back(make_pair(v, adj[v].size()));
    }
    sort(a.begin(), a.end(),cmp);

    int g=1;
	for(int i=n-1;i>=0;i--)
	{
		a[i].second=g;
		g++;
	}
	int maxi=0,k=0 ,mini= INT_MAX;
	vector<ll> out(n);
	sort(a.begin(), a.end());
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(auto x: adj[i])
		{
			if(a[x].second<a[i].second)
				count++;
		}
		maxi=max(count, maxi);
		mini= min(count, mini);
	}
	cout<<maxi-mini<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i].second<<" ";
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