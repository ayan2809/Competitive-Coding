#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll n=0;
	cin>>n;
	vector<ll> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int mini = *min_element(a.begin(),a.end()) ;
	ll ans = 0 ;

    int chg;
    bool res = false;
    for(auto i : a)
    {
    	if(i == mini)
    	{
           continue;
        }

        chg = i%(i-mini) ;
        if(chg == mini)
        {
            ans ++;
        }
        else
        {
        	mini = 0;
            res = true;
            ans = 0;
            break;
         }
    }


    if(res)
    {
       for(int i: a)
       {
           if(i !=0)
           {
            ans ++;
           }
        }
    }

     cout << ans << endl ;
}
int main()
{
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
}