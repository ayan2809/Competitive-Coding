#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll x=0,y=0;
	cin>>x>>y;
	int n=1,i;
	//int n=(int)sqrt(x+y),i=0;
	while(n*n <x+y)
		n++;
	if(n*n!=x+y)
	{
		cout<<"NO"<<endl;
		return;
	}
	if(n==1)
	{
		if(x==1)
		{
			//for (1,1) it will be even distance pair
			//hence it will be true
			cout<<"YES"<<endl;
			cout<<1<<endl;
		}
		else
		{
			//if x is not 1 there will be no odd distance pair

			cout<<"NO"<<endl;
		}
		return;
	}
	int even=1,odd=n-1;
	bool pass=false;
	while(odd>=1)
	{
		ll ans=even*odd*2;
		if(ans==y)
		{
			cout<<"YES"<<endl;
			cout<<n<<endl;
			pass=1;
			break;
		}
		even++;
		odd--;
	}
	if(!pass)
	{
		cout<<"NO"<<endl;
		return;
	}

	for(int i=1;i<=odd;i++)
	{
		cout<<1<<" "<<(i+1)<<endl;
	}
	for(int i=1;i<even;i++)
	{
		cout<<2<<" "<<(odd+i+1)<<endl;
	}

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