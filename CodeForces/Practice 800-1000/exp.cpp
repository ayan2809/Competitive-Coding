#include <bits/stdc++.h>

#define ll int

#define MOD 1e9+7

#define rep(i,a,b) for(ll i=(ll)a;i<(ll)b;i++)

#define sep(i,a,b) for(ll i=(ll)a;i>=(ll)b;i--)

#define pb push_back

#define db double

#define lb lower_bound

#define ub upper_bound

#define all(a) a.begin(),a.end()

#define sz(a) (ll)a.size()

#define Frs first

#define Snd second

#define quick ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

void solve() {

    ll n;

    cin>>n;

    vector <int> arr(n,0);

    vector <int> temp(n,0);

    rep(i,0,n) {

        cin>>arr[i];

        temp[i] = arr[i];

    }

    sort(all(temp), greater<int>());

    unordered_map <int, int> mp;

    rep(i,0,n) {

        if (mp.find(temp[i]) == mp.end())

            mp.insert({temp[i], i+1});

    }

    rep(i,0,n) {

        if (mp[arr[i]]>0) {

            cout<<mp[arr[i]]<<" ";

            mp[arr[i]]*=-1;

        }

        else {

            cout<<abs(mp[arr[i]])+1<<" ";

            mp[arr[i]]--;

        }

    }

    cout<<endl;

}

int main()

{quick;

    ll t;

    cin>>t;

    while(t--) {

        solve();

    }

    return 0;

}
