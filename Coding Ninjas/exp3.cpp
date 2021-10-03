/*
Test Case
2
5
2
1 5 3 4 9
1 2 5 3 1
5
3
1 2 8 4 6
5 15 5 2 9
*/
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
	int n=0,k=0;
	cin>>n>>k;
	vector<int> weight(n);
	vector<int> value(n);
	for(int i=0;i<n;i++)
	{
		cin>>weight[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>value[i];
	}
	int answer=0;
	for(int i=0;i<n;i++)
	{
		int ans=value[i],j=i+1;
		while(j<n)
		{
			
			map<int, int, greater<int>> umap;
			// for(int l=j;l<((j+k)>=n?n:j+k);l++)
			// {
			// 	umap[weight[l]]=value[l];
			// }
			int l=j,g=k;
			while(l<n && g>0)
			{
				if(g==0)
					break;
				umap[weight[l]]=value[l];
				l++;
				g--;
			}
			//cout<<umap.size();
			for(auto it: umap)
			{
				ans+=it.second;
				break;
			}
			// if(j+k>n)
			// 	break;
			// else
			// 	j+=k-1;
			//j=min(i+k, n);
			j+=k-1;
			 //j--;
			
		}
		// if(i==n-1)
		// {
		// 	ans+=value[n-1];
		// }
		//cout<<ans<<endl;
		answer=max(ans,answer);
	}
	cout<<answer<<endl;
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