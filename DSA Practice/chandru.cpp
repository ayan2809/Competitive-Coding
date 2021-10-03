#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void solve()
{
    string s="";
    cin>>s;
    int number=0;
    string ans1="";
    string g="0";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            g=g+s[i]; 
            continue;
        }
        else
        {
            int x=
            number+=stoi(g);
            g="0";
        }
        ans1+=s[i];
    }
    number+=stoi(g);
    cout<<ans1<<endl;
    cout<<number<<endl;
}

int main(){
    IOS;
    ll t=0;
    cin>>t;
    while(t--)
    {
        solve();
    }
}