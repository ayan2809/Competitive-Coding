#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define mod (ll)(246060)
#define endl "\n"

ll add(ll a, ll b, ll p=mod){return (a%p + b%p)%p;}
ll neg(ll a,ll p=mod){return (p-(a%p))%p;}
ll sub(ll a,ll b,ll p=mod){return add(a,neg(b));}

int main()
{
    IOS;
    ll n,value=0;
    cin>>n;
    //assert(1<=n && n<=1000000);
    ll arr[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        //assert(-1e18<=arr[i] && arr[i]<=1e18);
    }
    value=0;
    unordered_map<ll,ll> umap;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=(-1*arr[i]);
            value = sub(value,arr[i]);
        }
        else
        {
            value = add(value,arr[i]);
        }
        if(umap[value])
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;  
        }
        umap[value]=1;
    }
  
    return 0;
}