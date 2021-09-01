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
	vector<string> s(n);
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}

	string ans="";
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(s[i][j]=='0')
			ans+="1";
		else
			ans+="0";

		j++;
	}
	cout<<ans<<endl;
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