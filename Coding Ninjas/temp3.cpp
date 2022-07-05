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
    int n=0;
    cin>>n;
    vector<int> a(n);
    int cnt0=0,cnt1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> try1(n,-1);
    try1[0]=0;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            if(a[i]==0)
            {
                if(try1[i]==try1[0])
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
            else
            {
                if(try1[i]!=try1[0])
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        else if(a[i]==0)
        {
            try1[i+1]=try1[i];
        }
        else
        {
            try1[i+1]=abs(1-try1[i]);
        }
    }
    fill(try1.begin(), try1.end(),-1);
    try1[0]=1;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            if(a[i]==0)
            {
                if(try1[i]==try1[0])
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
            else
            {
                if(try1[i]!=try1[0])
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        else if(a[i]==0)
        {
            try1[i+1]=try1[i];
        }
        else
        {
            try1[i+1]=abs(1-try1[i]);
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    // time_t start, end;
    // time(&start);
    IOS;
    ll t=0;
    cin>>t;
    while(t--)
    {
        solve();
    }
    // time(&end);
    // double time_taken = double(end - start);
    // cout << "Time taken by program is : " << fixed
    // << time_taken << setprecision(5);
}