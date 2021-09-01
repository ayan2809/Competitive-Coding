#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void findNthDigit(int n) 
{
    string s;
    for(int i=1;i<n;i++)
    {
        s+=to_string(i);
    }
   cout<<(s[n-1]-48)<<endl;
}
int main(){
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		findNthDigit(n);
	}
}