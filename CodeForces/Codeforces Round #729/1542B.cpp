#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
bool result(int n,int a,int b)
{
	if(n == a) return true;
	if(n == b) return true;
	if(n < a) return false;
	if(n < b) return false;
	if(n % b == 1) return true;
	if(n % a == 0) return true;
	if(a + b == n) return true;
	int c = n;
	for(int i=0;i<n;i++)
	{
		c = c - a;
		if(n < a) return false;
		if(n < b) return false;
		if(n % b == 1) return true;
		if(n % a == 0) return true;
		if(n % b == 0) return true;
	}
	return false;
}
int main()
{
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n=0,a=0,b=0;
		cin>>n>>a>>b;
		// if(x%a==0 || x%b==0)
		// 	cout<<"Yes"<<endl;
		// else
		// {
		// 	// apply binary tree and check if it is in the tree

		// 	set <ll> a
		// }

		if(result(n,a,b))
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}