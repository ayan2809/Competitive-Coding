#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"

void solve2()
{
	string a="", b="";
	cin>>a>>b;
	int x=0,y=0;
	int ans=0;
	while(x<a.length())
	{
		if(a[x]==b[y])
		{
			x++;
			y++;
		}
		else
		{
			y++;
			ans++;
		}
		if(y==b.length()+1)
		{
			cout<<"IMPOSSIBLE";
			return;
		}
	}
	ans=b.length()-a.length();
	cout<<ans;

}

void solve()
{
	string a="",b="";
	cin>>a>>b;
	map<char, int> umap1;
	map<char, int> umap2;
	for(auto it: a)
		umap1[it]+=1;
	for(auto it: b)
		umap2[it]+=1;

	int count=0;
	for(auto it: umap1)
	{
		if(umap2[it.first]>=it.second)
		{
			count+=umap2[it.first]-it.second;
		}
		else
		{
			cout<<"IMPOSSIBLE";
			return;
		}
	}
	cout<<count;
	
}
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int k=1;
	while(t--)
	{	
		// out={};
		cout<<"Case #"<<k<<": ";
		solve2();
		cout<<endl;
		k++;
	}
}