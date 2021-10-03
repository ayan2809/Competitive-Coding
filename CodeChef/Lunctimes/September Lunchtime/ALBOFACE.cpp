#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
bool checker(ll n)
{
	// ll p= (ll )log2(n);
	// return 1<<p;
	if(n!=0 && (n & (n-1))==0)
		return true;
	else
		return false;
}
void solve()
{
	ll n=0;
	cin>>n;
	//cout<<checker(n)<<endl;
	// int check=0;
	// while(n!=0)
	// {
	// 	if(check%2==0 && n==0)
	// 	{
	// 		cout<<"Alice"<<endl;
	// 	}
	// 	else if(check%2!=0 && n==0)
	// 	{
	// 		cout<<"Bob"<<endl;
	// 	}
	// 	ll x= 1<<1,j=1,f=0;
	// 	while(x<=n)
	// 	{
	// 		//cout<<x<<endl;
	// 		j++;
	// 		if(x%n==0)
	// 		{
	// 			f=1;
	// 			break;
	// 		}
	// 		x=1<<j;
			
	// 	}
	// 	if(f==1)
	// 		n/=x;
	// 	else
	// 		n-=1;

	// 	check++;

	// }
	ll i=2;
	if(n==2)
	{
		cout<<"Bob"<<endl;
		return;
	}
	if(n==1)
	{
		cout<<"Alice"<<endl;
		return;
	}
	if(n%2==0)
	{
		if(checker(n+2)==true)
			cout<<"Bob"<<endl;
		else
			cout<<"Alice"<<endl;
		return;
	}
	if(n%2!=0)
	{
		if(checker(n+1)==true)
			cout<<"Alice"<<endl;
		else
			cout<<"Bob"<<endl;
		return;
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
	//time(&end);
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
 //         << time_taken << setprecision(5);
}