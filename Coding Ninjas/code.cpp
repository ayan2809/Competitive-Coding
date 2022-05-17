#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define loop int i=1;i<n;i++
#define loop1  
#define loop2 int i=0;i<n;i++
#define loop3
#define loop4
#define loop5
#define all(v) v.begin(),v.end()

#define inf 1999999996000000010

using namespace std;







int main() {
int t;
cin>>t;
while(t--)
{
    int  n; cin>>n;
vector<ll> p(n);  cin>>p[0]; ll mn=p[0];

for(loop) {cin>>p[i]; mn=mn&p[i]; }



int cnty=0;
 for(int i=0;i<n;i++
 ) {  if(p[i]==mn) cnty++;  }
 cnty=n-cnty;
 int ans=0;
 for(loop2)
 {  if(p[i]==mn) continue;
    if(i==(n-1)) {ans++; continue;}

     p[i+1]=p[i]&p[i+1];
     ans++;
 }


cout<<ans<<endl;
}

 return 0;
}