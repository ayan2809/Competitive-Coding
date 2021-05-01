#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		ll n=0; cin>>n;
		int c1=0,c2=0,c3=0;
		while(n%2==0)
		{
			n/=2; 
			c1++;
		}
		while(n%3==0)
		{
			n/=3; 
			c2++;
		}
		while(n%5==0)
		{
			n/=5; 
			c3++;
		}
		if(n!=1)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<c1+c2*2+c3*3<<endl;
		}
		
	}
}