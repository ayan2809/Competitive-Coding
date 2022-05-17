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
	int w=0,x=0,y=0,z=0;
	cin>>w>>x>>y>>z;
	x=x-w;
	y*=z;
	if(y==x)
	{
		cout<<"filled"<<endl;
	}
	else if(y>x)
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		cout<<"unfilled"<<endl;
	}
}
int main(){
	// time_t start, end;
	// time(&start);
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
	// time(&end);
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
         // << time_taken << setprecision(5);
}