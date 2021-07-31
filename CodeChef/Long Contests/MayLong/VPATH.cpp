#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//type declarations
using ll = long long int;


using vll = vector<ll>;
using msll = multiset<ll>;



const ll MOD = 1000000007;
const ll INF = 1e18;
const int INFINT = 1e9 + 5;

vector <vll> adj;
vll color;
vll parent;
vll D;
vll A;
vll blank;
vll leaves;

void parentFinder(ll s)
{
    queue <ll> mq;
    color[s] = 1;
    parent[s] = -1;
    mq.push(s);

    
    leaves.clear();
    while(!mq.empty()){
        ll top = mq.front();
        mq.pop();

        ll flag = 1;
        for (auto u : adj[top])
        {
            if (color[u] == 0)
            {
                flag = 0;
                color[u] = 1;
                parent[u] = top;
                mq.push(u);
            }
        }

      
        if (flag == 1)
            D[top] = 1;
        
        leaves.push_back(top);
    }
}

void finalanswer(ll s , ll N)
{
    ll ans = 0;

    queue <ll> mq;
    color[s] = 4;
    A[s] = D[s];
    ans = (ans + A[s]) % MOD;
    mq.push(s);

    while(!mq.empty()){
        ll top = mq.front();
        mq.pop();

        for (auto u : adj[top])
        {
            if (color[u] <= 3)
            {
                color[u] = 4;
                A[u] = (2 * A[top] - 3 * D[u] + MOD) % MOD;
                ans = (ans + A[u]) % MOD;
                mq.push(u);
            }
        }
    }
    ans = (ans + 3 * N) % MOD;

    
    cout << (ans * 250000002) % MOD << "\n";
}

void solve()
{
    ll N;
    cin >> N;

    adj.assign(N + 1 , blank);
    color.assign(N + 1 , 0);
    parent.assign(N + 1 , 0);
    D.assign(N + 1 , 0);
    A.assign(N + 1 , 0);
    
    for (ll i = 1; i <= N - 1; i++){
        ll u , v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    parentFinder(1);

    while (!leaves.empty()){
        ll top = leaves.back();
        leaves.pop_back();

        if (parent[top] != -1){
            if (color[parent[top]] == 1){
                D[parent[top]] = (D[parent[top]] + 1 + 2 * D[top]) % MOD;
                color[parent[top]] = 2;
            }
           
            else
                D[parent[top]] = (D[parent[top]] + 2 * D[top]) % MOD;
        }
    }

  
    finalanswer(1 , N);
}

//main function
int main(){
    //faster io
    IOS;

    
    ll t;
    cin >> t;
    while(t--)
    {
    	solve(); 
    }
    
  
}