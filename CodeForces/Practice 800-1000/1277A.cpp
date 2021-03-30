#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll count_digit(ll number) {
   return ll(log10(number) + 1);
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		ll n=0;
		ll count=0;
		cin>>n;
		if(n<=9)
		{
			cout<<n<<endl;

		}
		else
		{
			count=9;
			ll size=count_digit(n);
			

		}
	}
}