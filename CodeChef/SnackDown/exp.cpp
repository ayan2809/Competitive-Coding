#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define sc ;
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ll long long
#define Radhe ios::sync_with_stdio(false);
#define Krishna cin.tie(NULL);
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.second < b.second;
}

int main()
{
    tc
    {
        ll n, x;
        cin >> n;
        vector<pair<ll, ll>> arr;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(make_pair(x, i));
        }

        ll k = 0;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            if (arr[i].first > k)
            {
                arr[i].first = k;
                k++;
            }
            else if (arr[i].first == k)
            {
                arr[i].first = k;
            }
        }

        sort(arr.begin(), arr.end(), cmp);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i].first << " ";
        }
        cout << "\n";
    }
}