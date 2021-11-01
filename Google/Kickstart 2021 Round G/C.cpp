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
	ll n=0,d=0,c=0,m=0;
	cin>>n>>d>>c>>m;
	string s;
	cin>>s;
	ll maxi=0;
	vector<int> check;
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]=='D')
		{
			maxi++;
		}
		check.insert(check.begin()+0,maxi);
	}
	// for(auto it: check)
	// 	cout<<it<<" ";
	// cout<<endl;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='C')
		{
			if(c<=0 && check[i]>=1)
			{
				cout<<"NO"<<endl;
				return;
			}
			c--;

		}
		else if(s[i]=='D')
		{
			d--;
			c+=m;
		}
	}
	if(d<0)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;

}
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int k=1;
	while(t--)
	{	
		
		cout<<"Case #"<<k<<": ";
		solve();
		//cout<<endl;
		k++;
	}
}