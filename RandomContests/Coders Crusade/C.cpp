#include <bits/stdc++.h>
 
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define INF INT_MAX
#define X first
#define Y second
#define pb push_back
 
using namespace std;
 
typedef vector<int> vint;
typedef vector<long long int> vlint;
typedef vector<vector<int> > vvint;
typedef vector<vector<long long int> > vvlint;
typedef long long int lint;
 
void solve(void);
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    /*
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    */
 
    int t = 1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}
 
void solve(void) {
    lint x;
    cin>>x;
    vector<pair<lint, lint> > ans;
    vector<pair<lint, lint> > Fans;
 
    if(x == 1) {
        cout<<"1\n1 1"<<endl;
        return;
    }
 
    lint n = 1, m = x;
 
    while(n<=2000003){
 
        lint numerator = 6*x + n*n*n - n;
        lint denominator = 3*n*(n+1);
 
        if(numerator%denominator == 0) {
            m = numerator / denominator;
 
            if(n > m)
                break;
 
            ans.pb({n, m});
        }
        n++;
    }
 
    // for( auto itr : ans)
    //  cout<<itr.X<<' '<<itr.Y<<endl;
 
    for(int i=0; i<(int) ans.size(); i++) {
        Fans.pb(ans[i]);
    }
 
    for(int i = ans.size()-1; i >= 0; i--) {
        if(ans[i].X == ans[i].Y)
            continue;
        Fans.pb({ans[i].Y, ans[i].X});
    }
 
    cout<<Fans.size()<<endl;
    for(auto itr : Fans) {
        cout<<itr.X<<' '<<itr.Y<<endl;
    }
}