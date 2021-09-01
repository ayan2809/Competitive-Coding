#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
    ll n=0;
    cin>>n;
    vector<ll> a(n);
    map<ll,ll> umap;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        umap[a[i]]+=1;
    }
    ll ans=1ll*n*(n-1);
    for(auto it: umap)
        ans-=it.second*(it.second-1);
    cout<<ans<<endl;

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