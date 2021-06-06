#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define mod 1000000007
#define pb push_back
#define emb emplace_back 
#define ump unordered_map
#define fast1 ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define fors(i,n) for(int i=0;i<n;i++)
#define forse(i,a,b) for(lld i=a;i<b;i++)
#define gogprnt cout<<"Case #"<<x<<": ";
#define Sortdes(ar,n) sort(ar,n,greater<lld>());
#define print(ar) fors(i,ar.size()) cout<<ar[i];
#define sortall(ar) sort(ar.begin(),ar.end())
#define vall  std::vector<lld>
#define MAXN 10000001
using namespace std;
lld mypower(lld x, lld n){    if (n == 0)    return 1;    if (n & 1)     return (((x * mypower(x, n / 2))%mod) * (mypower(x, n / 2)%mod)%mod);return (((mypower(x, n / 2))%mod) * (mypower(x, n / 2)%mod))%mod;}
//int gcd(int a,int b){ if(b==1 || a==1)   return 1;    if(b%a==0)    return a;    return(gcd(b%a,a));}
//lld modinv(lld a) { lld g = gcd(a, mod); if (g != 1) return -1;else{  return mypower(a, mod-2)%mod; } } 
//(a/b)%m==((a%m)*(modinv(b)%m));
//a%m=(a+m)%m in order to avoid -ve no
//bool cmp(const pair<lld,lld> &a,const pair<lld,lld>&b) return (a.first()>b.first());
// vector<vector<lld>> adj(1e6+1);
// ump<lld,lld> vis,vs,mp,mp1;lld a1=0,k1=1;
//void dfs(lld j){vs[j]=1;for (auto i : adj[j]) if(!vs[i]) dfs(i);}
struct clan{
     lld p,q,r;
};

void solve()
{
     lld y,z,x,n,k,c,sum=0,ans=0,t=1,flag=0;
     string s,s1,s2;
    cin>>n;
    vector<lld> ar,stacks;
    fors(i,n) cin>>y,ar.pb(y);
    stacks.pb(ar[0]);
    int i=1;
    while(i<n)
    {
         k=ar[i];
         x=upper_bound(stacks.begin(),stacks.end(),ar[i])-stacks.begin();
         if(x<stacks.size() && stacks[x]>ar[i])
         swap(stacks[x],k);
         else
         stacks.pb(ar[i]);
         i++;
         
    }
    cout<<stacks.size()<<endl;
   // fors(i,stacks.size()) cout<<stacks[i]<<" ";
    //cout<<endl;
    //cout<<r<<endl;

    
}
int main() {
	fast1;
//int x=1,t;cin>>t;while(t--)
	 solve();//x++;}
	return 0;   
}
