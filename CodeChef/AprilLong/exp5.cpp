#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sz(x) (int)(x).size()

const int maxi = 1e6; 

#define IOS                                                                                                       \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

int temp0[maxi], temp1[maxi];
int dp0[maxi + 2], dp1[maxi + 2];

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    int last = -1;
 
    for (int i = (0); i < (n); i++)
    {
        if (s[i] == '0')
        {
            
            for (int j = (last+1); j <= (i); j++)
            {
                temp0[j] = i;
            }
            last = i;
        }
    }

 
     for (int i = (last+1); i < (n); i++)
    {
        temp0[i] = n;
    }

    if (temp0[0] == n)
    {
        cout << "0" << endl;
        return;
    }

    last = -1;
    
     for (int i = (0); i < (n); i++)
    {
        if (s[i] == '1')
        {
           
            for (int j = (last+1); j <= (i); j++)
            {
                temp1[j] = i;
            }
            last = i;
        }
    }

   
     for (int i = (last+1); i < (n); i++)
    {
        temp1[i] = n;
    }

    dp0[n] = dp0[n + 1] = 0;
    dp1[n] = dp1[n + 1] = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        dp0[i] = dp0[i + 1];
        if (s[i] == '0' and temp1[i] < n)
            dp0[i] = max(dp0[i], dp0[temp1[i] + 1] + 1);
        if (s[i] == '1' and temp0[i] < n)
            dp0[i] = max(dp0[i], dp0[temp0[i] + 1] + 1);
        dp1[i] = dp1[i + 1];
        if (temp1[i] < n)
            dp1[i] = max(dp1[i], dp0[temp1[i] + 1] + 1);
    }

    int len = dp1[0] + 1;
    int cmp = temp1[0] + 1;
    string answer = "1";
   
    for (int i = (1); i < (len); i++)
    {
        if (cmp >= n)
        {
            answer.push_back('0');
            continue;
        }
        if (temp0[cmp] >= n)
        {
            answer.push_back('0');
            cmp = temp0[cmp] + 1;
            continue;
        }
        if (dp0[temp0[cmp] + 1] < len - i - 1)
        {
            answer.push_back('0');
            cmp = temp0[cmp] + 1;
        }
        else
        {
            answer.push_back('1');
            cmp = temp1[cmp] + 1;
        }
    }
    cout<<answer<<endl;
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