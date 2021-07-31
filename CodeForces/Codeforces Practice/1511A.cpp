#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front

void solve()
{
	int n=0;
	cin>>n;
	int r=0;
	int t1=0,t2=0;
	for(int i=0;i<n;i++)
	{
		cin>>r;
		if(r==2)
			t2--;
		else if(r==1)
			t1++;
		else
			t1++;
	}
	cout<<t1<<endl;

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