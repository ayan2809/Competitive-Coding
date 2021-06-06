#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x,distance;
    float d,side;
    cin>>x;
    side=sqrt((double)x);
    d=4*side;
    distance=ceil(d);
    cout<<distance;
    return 0;
}