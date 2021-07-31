#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        
        int x, m, r;
        cin >> x >> r >> m;
        x = x / 60;
        bool ret = true;
        if (m < r)
            ret = false;
        if (x < r && ((r - x) * 2 + x) > m)
        {
            ret = false;
        }
        cout << (ret ? "YES\n" : "NO\n");
    }
}