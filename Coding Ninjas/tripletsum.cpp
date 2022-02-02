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
	int n=0,num=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>num;
	map<int, int> umap;
	for(int i=0;i<n;i++)
	{
		umap[arr[i]]+=1;
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int x=num-(arr[i]+arr[j]);
			if(x>arr[i] && x>arr[j])
			{
				//cout<<x<<endl;
				ans+=umap[x];
			}
		}
	}
	cout<<ans<<endl;

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
	double time_taken = double(end - start);
	cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
}