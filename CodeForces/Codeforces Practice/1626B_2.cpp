#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int maxx=0,ans=0;
        for(int i=s.size()-1;i>0;i--){
            int a=(int)s[i]-'0';
            int b=(int)s[i-1]-'0';
            if(a+b>9){
             s[i-1]='1';
             char c=(a+b)%10+'0';
             s[i]=c;
             cout<<s<<endl;
             ans=1;
             break;
         }
     }
     if(ans==0)
     {
         int x=(s[0]-'0')+(s[1]-'0');
         char m=x+'0';
         string ss=m + s.substr(2);
         cout<<ss<<endl;
     }
   }

}