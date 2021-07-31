#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	int n=0;
	cin>>n;
	cout<<n<<endl;
	vector<int> a(n);
	vector <int>out;
	map<int, int> umap;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		umap[a[i]]=0;
		cout<<a[i]<<endl;
	}
	//sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;i++)
		{
			if(a[j]%a[i]==0)
			{
				umap[a[i]]+=1;
				umap[a[j]]+=1;
			}
		}
	}
	for(auto it: umap)
	{
		out.push_back(it.second);
	}
	for(auto it: out)
	{
		cout<<it<<" ";
	}


}
int main()
{
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
}