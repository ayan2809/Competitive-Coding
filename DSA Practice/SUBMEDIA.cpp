#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void checker(vector<int> arr, int k)
{
		int n=arr.size();
		sort(arr.begin(), arr.end());
        if(k%2!=0)
        {
            int cnt=0;
        for(int i=n-k;i<n;i++)
        {
            cnt++;
            if(cnt==(k/2)+1)
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
        }
        if(k%2==0)
        {
            int cnt=0;
        for(int i=n-k;i<n;i++)
        {
            cnt++;
            if(cnt==(k/2))
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
       }
}
void solve()
{
	int n=0,k=0;
	cin>>n>>k;
	vector<int> a(n);
	map<int, int> umap;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		umap[a[i]]=i;
	}
	checker(a, k);
	vector<int> ans;
	map<int, int> :: reverse_iterator it;
	for(it = umap.rbegin(); it != umap.rend(); it++)
	{
		if(k==0)
			break;
		k--;
		ans.push_back(it->second);
	}
	sort(ans.begin(), ans.end());
	for(auto itr: ans)
	{
		cout<<a[itr]<<" ";
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