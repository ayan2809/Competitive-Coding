#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll amin,bmin,cmin,tmin,a,b,c;
	cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
	ll total=a+b+c;
	int f=0;
	if(a>=amin)
		f++;
	if(b>=bmin)
		f++;
	if(c>=cmin)
		f++;
	if(total>=tmin)
		f++;

	if(f==4)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main()
{
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
}