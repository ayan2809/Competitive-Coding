#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
bool isPossible(vector<vector<int>>ans, int i, int j, int n, int m)
{
    bool out=true;
    if(i==0 && j==0)
    {
        if(ans[i][j+1]!=ans[i+1][j+1])
            return false;
    }
    else if(i==0 && j==m-1)
    {
        if(ans[i][j-1]!=ans[i+1][j])
            return false;
    }
    else if(i==n-1 && j==0)
    {
        if(ans[i-1][j]!=ans[i][j+1])
            return false;
    }
    else if(i==n-1 && j==m-1)
    {
        if(ans[i-1][j]!=ans[i][j-1])
            return false;
    }
    else if(i==0)
    {
        int one=0,zero=0;
        if(ans[i][j+1]==1)
            one++;
        else
            zero++;
        if(ans[i+1][j]==1)
            one++;
        else
            zero++;
        if(ans[i][j-1]==1)
            one++;
        else
            zero++;
        if(one ==0 || zero ==0)
            return false;
    }
    else if(j==0)
    {
        int one=0,zero=0;
        if(ans[i][j+1]==1)
            one++;
        else
            zero++;
        if(ans[i+1][j]==1)
            one++;
        else
            zero++;
        if(ans[i-1][j]==1)
            one++;
        else
            zero++;
        if(one ==0 || zero ==0)
            return false;
    }
    else if(i==n-1)
    {
        int one=0,zero=0;
        if(ans[i][j+1]==1)
            one++;
        else
            zero++;
        if(ans[i-1][j]==1)
            one++;
        else
            zero++;
        if(ans[i][j-1]==1)
            one++;
        else
            zero++;
        if(one ==0 || zero ==0)
            return false;
    }
    else if(j==m-1)
    {
        int one=0,zero=0;
        if(ans[i][j-1]==1)
            one++;
        else
            zero++;
        if(ans[i+1][j]==1)
            one++;
        else
            zero++;
        if(ans[i][j-1]==1)
            one++;
        else
            zero++;
        if(one ==0 || zero ==0)
            return false;
    }
    else
    {
        int one=0,zero=0;
        if(ans[i][j+1]==1)
            one++;
        else
            zero++;
        if(ans[i+1][j]==1)
            one++;
        else
            zero++;
        if(ans[i][j-1]==1)
            one++;
        else
            zero++;
        if(ans[i-1][j]==1)
            one++;
        else
            zero++;

        if(one!=zero)
            return false;
    }
    return true;
}
void dfs(int n, int m, vector<vector<int>> &ans, int i, int j)
{
    if(i<0 || j<0 || i>=n || j>=m)
    {
        // cout<<"hello";
        return;
    }
    if(i==n-1 && j==m-1)
    {
        // cout<<"hello";
        return;
    }
    if(isPossible(ans, i,j , n, m)){
        ans[i][j]=1;
        dfs(n, m, ans, i+1, j);
        dfs(n, m, ans, i, j+1);
        dfs(n, m, ans, i-1, j);
        dfs(n, m, ans, i, j-1);
        ans[i][j]=0;
    }
}
void solve()
{
    ll n=0,m=0;
    cin>>n>>m;
    // cout<<"Hello";
    // vector<vector<int> > ans( n , vector<int> (m, 0));
    // dfs(n, m, ans, 0,0);
    // for(auto it: ans)
    // {
    //     for(auto itr: it)
    //     {
    //         cout<<itr<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<((i%4<=1)!=(j%4<=1))<<" \n"[j==m];
        }
    }

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
    //      << time_taken << setprecision(5);
}