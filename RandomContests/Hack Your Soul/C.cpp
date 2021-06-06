#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MP make_pair
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PLI pair<ll, int>
#define PIL pair<int, ll>
#define STR string
#define Fst first
#define Snd second
#define SHN 1e9
#define LSHN 1e18
using namespace std;
int n;
int a[200010];
vector<int> v[200010];
int mx[200010];
bool visit[200010];
int upi[200010];
int par[200010];
void dfs(int x)
{
	visit[x]=1;
	mx[x]=a[x];
	//cout <<x<<" #########\n";
	for (int i=0;i<v[x].size();i++)
	{
		int xi=v[x][i];
		if (visit[xi]) 
			{
				continue;
			}
		par[xi]=x;
		dfs(xi);
		//cout <<mx[x]<<" "<<mx[xi]<<" ##\n"; 
		if (mx[xi]>0) mx[x]+=mx[xi];
	}
}
int upp(int x)
{
	if (!x) return 0;
	if (upi[x]!=-1e9) 
		{
			return upi[x];
		}
	upi[x]=max(0,upp(par[x])+mx[par[x]]-max(0,mx[x]));
	//cout <<x<<" "<<upp(par[x])<<" "<<mx[par[x]]<<" "<<mx[x]<<" "<<upi[x]<<" ##\n";
	return upi[x];
}
int main()
{
	scanf("%d",&n);
	for (int i=0;i<n;i++) 
		cin>>a[i];
	for (int i=0;i<n;i++) 
		{
			if (!a[i])
			{
					a[i]=-1;
			}
	}
	for (int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		x--,y--;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(0);


	fill(upi,upi+n,-1e9);


	for (int i=0;i<n;i++) 
		cout<<mx[i]+upp(i)<<" ";

	
}