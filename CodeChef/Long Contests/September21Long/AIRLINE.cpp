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
	ll a, b, c, d, e;
   cin >> a >> b >> c >> d >> e;
   if (a + b <= d && c <= e) 
   	cout << "YES";
   else if (b + c <= d && a <= e)
   	cout << "YES";
   else if (a + c <= d && b <= e) 
   	cout << "YES";
   else 
   	cout << "NO";
   cout<<endl;
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