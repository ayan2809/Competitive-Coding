#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX(x, y) ((x) > (y)) ? (x) : (y)
#define MIN(x, y) ((x) < (y)) ? (x) : (y)
#define all(v) v.begin(), v.end()


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

#define IOS                                                                                                       \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vl arr(n + 1);
    for(int i=0;i<(n);i++)
    {
        cin >> arr[i + 1];
    }

    vector<vpl> sup(n + 1);
    for (int i = 0; i < (m); i++)
    {
        ll u, v, d;
        cin >> u >> v >> d;
        sup[u].push_back(make_pair(i, d));
        sup[v].push_back(make_pair(i, d));
    }

    vector<vpl> dp(n + 1);
    dp[0].push_back(make_pair(0, 0));
    for (int i = (1); i <= (n); i++)
    {
        vpl temp;
        temp.insert(temp.end(), all(dp[i - 1]));
        ll cur = 0, msk = 0;
        set<ll> op;
       
        for (int j = (i); j >= (1); j--)
        {
            cur += arr[j];
            msk ^= 1LL << j;
            for (auto &[idx, z] : sup[j])
            {
                if (op.count(idx))
                    cur += z;
                else
                    op.insert(idx);
            }
            if (j > 1)
                for (auto &[val, old_msk] : dp[j - 2])
                    temp.push_back(make_pair(val + cur, msk ^ old_msk));
            else
                temp.push_back(make_pair(cur, msk));
        }
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        set<ll> supply;
        ll fill = 0;
        for (ll j = 0; j < temp.size() and fill < k; j++)
        {
            if (supply.count(temp[j].second))
                continue;
            dp[i].push_back(temp[j]);
            fill++;
            supply.insert(temp[j].second);
        }
    }
    for (int i = 0; i < (k); i++)
    {
        cout << dp[n][i].first << " ";
    }
    cout << endl;
}

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}