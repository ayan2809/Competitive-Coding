#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<long,long>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;

vll v[1000001];
 vll v1,vc;
  vp pp;
void leafnode(int node,int p)
{
     for(auto v:v[node])
   {
       if(v==p || v==1)continue;
       leafnode(v,node);
   }
 pp.clear();
   for(auto i:v[node])
   {
       if(i!=p && i!=1)
       pp.push_back({vc[i],i});
   }
   sort((pp).rbegin(), (pp).rend());
   int ctr=1;
   for(auto i:pp)
   {
       v1[i.second]=ctr;
       ctr++;
   }
   for(auto i:v[node])   
   {
       if(i!=p && i!=1)
       {
           vc[node]=(vc[node]+(v1[i]*vc[i]));
       }
   }

}



void solve(){
   
   
   ll n,x;
   cin>>n>>x;
    for(int i=0;i<n;i++)
    {
      v[i+1].clear();
    }
   vc.assign(n+1,1);
    v1.assign(n+1,0);
 
   umll mp_vl;
   
   x=x%mod;
   for(ll i=0;i<n-1;i++)
   {  ll a,b;cin>>a>>b;
      
       v[a].push_back(b);
       v[b].push_back(a);
   
   }

   leafnode(1,0);
  

  ll res=((vc[1]%mod*x)+mod)%mod;
  cout << res <<endl;
}

int main(){
    

    IOS;

    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}