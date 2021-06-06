#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sumDivisible(ll n,ll p)
{
    return n*(p/n)*((p/n)+1)/2;
}
int main()
{
    ll t=0;
    cin>>t;
    while(t--)
    {
        ll n=0;
        cin>>n;
        
       
        cout<<sumDivisible(3,n-1) + sumDivisible(5,n-1)-sumDivisible(15,n-1)<<endl;
    }
}