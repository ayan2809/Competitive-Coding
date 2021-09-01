#include <bits/stdc++.h>
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define mod (ll)(246060)
#define endl "\n"
using namespace std;

bool vowel(char& c) 
{
    return (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}

int main() 
{
    
    IOS;
    int t;
    cin >> t;
    string s;


    for (int i=1; i<=t; i++) 
    {
        cin >> s;
        sort(s.begin(), s.end());
        int mxc, mx_vow, cnt_con, cnt_vow;
        mxc = mx_vow = cnt_con = cnt_vow = 0;
        int ans = 1;
        for (int j=0; j<s.size()-1; j++)
        {
            if (s[j] != s[j+1])
             {
                if (vowel(s[j])) 
                {
                    mx_vow = max(mx_vow, ans);
                    cnt_vow += ans;
                } else {
                    mxc = max(mxc, ans);
                    cnt_con += ans;
                }
                ans = 1;
            }
            else ++ans;
        }

        if (vowel(s.back())) 
        {
            mx_vow = max(mx_vow, ans);
            cnt_vow += ans;
        } else 
        {
            mxc = max(mxc, ans);
            cnt_con += ans;
        }

        int to_vowels = cnt_con + 2 * (cnt_vow - mx_vow);
        int to_consonants = cnt_vow + 2 * (cnt_con - mxc);

        cout << "Case #" << i << ": " << min(to_vowels, to_consonants) << endl;
    }
    return 0;
}