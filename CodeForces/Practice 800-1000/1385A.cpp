#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		vector<ll>a(3);
		cin>>a[0]>>a[1]>>a[2];
		sort(a.begin(),a.end());
		if(a[1]!=a[2])
		cout<<"NO"<<endl;
		else
		cout<<"YES\n"<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
		
	}
}
