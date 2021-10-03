#include<bits/stdc++.h>
using namespace std; 
#define endl "\n"   
/*
Keka Code 
*/
void check(int *ans,int n, int t)
{   
    if(t==1)
    {
        if(n>=5)
        {
            n-=5;
            ans[5]=1;
        } 
        for(int i=9;i>=6;i--)
        {
            if(n<=0)
                break;
            n--;
            ans[i]=1;     
        }
    }
    else
    {
        if(n>=5)
        {
            n-=5;
            ans[4]=1;
        }
        for(int i=0;i<5;i++)
        {
            if(n<=0)
                break;
            n--;
            ans[i]=1;
                    
        }
    }
}
void solve()
{
    int n=0;
    cin>>n;
    int ans[10]={0};
    if(n<=9)
    {
        check(ans, n,1);
    }
    else
    {
        int d=n%10;
        int x=n/10;
        check(ans, d,1);
        check(ans, x, 2);
    }

    for(int i=0;i<10;i++)
        cout<<ans[i]<<" ";
    cout<<endl;

}
int main(){
    
        solve();
   
}