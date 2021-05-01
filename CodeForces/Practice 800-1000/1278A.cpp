#include<bits/stdc++.h>
using namespace std;
#define ll long long  
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		vector<ll> a(3);
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		if(a[2]>(a[1]+a[0]+1))
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;

	}
}