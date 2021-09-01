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
    string word="";
    cin>>word;
    int index=0;
    cout<<s<<endl;
    while(index!=-1)
    {
        index=s.find(word, index);
        cout<<"Occurence at : "<<index<<endl;
        index+=1;
    }
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