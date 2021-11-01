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
	ll k=0;
	cin>>k;
	//cout<<k<<endl;
	int a[k][4];
	vector<int>x;
	vector<int> y;
	for(int i=0;i<k;i++)
	{
		int b=0,c=0,d=0,e=0;
		cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
		x.push_back(a[i][0]);
		x.push_back(a[i][2]);
		y.push_back(a[i][1]);
		y.push_back(a[i][3]);
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	int a1=x.size()/2;
	cout<<min(x[a1],x[a1-1]);
	cout<<" "<<min(y[a1],y[a1-1])<<endl;
	
	

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