#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

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



vector <pair <ll , ll> > ans(4*1000000 + 2 , {1 , 0});
vll spf(4*1000000 + 2 , 0);

void solve(){
    ll k; 
    cin >> k;

    cout << (ans[4*k + 1].second + 4*k + 1 - 2) / 2 << "\n";
}

void precompute(){
    ans[0] = {0 , 0};
    ans[1] = {0 , 1};

    for(ll i = 2; i <= 4000001; i++){
        //the number is a prime
        if(ans[i].first == 1){
            for (ll j = 2*i; j <= 4000001; j += i){
                ans[j].first = 0;
                if (spf[j] == 0)
                    spf[j] = i;
            }
           
            ll j = 1 , temp = i;
            while(temp <= 4000001){
                ans[temp].second = j*(temp - temp/i) + temp;

                //cout<<temp<<endl;
                temp *= i;
                j++;
            }
        }
        
        else{
            ll temp = i , k = 1;
            while(temp % spf[i] == 0){
                k *= spf[i];
                temp /= spf[i];
                //cout<<k<<endl;
            }
            ans[i].second = ans[temp].second * ans[k].second;
        }
    }
}


int main(){
   
    IOS;

    precompute();

    ll t ; 
    cin >> t;
    while(t--){
        solve(); 
        
    }
    
    return 0;
}