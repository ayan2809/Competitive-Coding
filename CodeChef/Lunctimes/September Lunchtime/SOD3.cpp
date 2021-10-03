#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
ll solve()
{
	ll left=0,right=0;
	cin>>left>>right;
	for(ll i=0;i<3;i++)
	{
		if(left>right)
			return 0;
		if(left<=right && left%3==0)
			break;
		else
			left++;
	}
	for(ll i=0;i<3;i++)
	{
		if(left<=right && right%3==0)
			break;
		else
			right--;
	}
	ll a=(left/3);
	ll b= right/3;
	return abs(a-b)+1;
}
int main(){
	// time_t start, end;
	// time(&start);
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		cout<<solve()<<endl;
	}
	// time(&end);
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
 //         << time_taken << setprecision(5);
}