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
	int x=0,a=0,b=0,c=0;
	for(int i=0;i<5;i++)
	{
		cin>>x;
		if(x==0)
			a++;
		else if(x==1)
			b++;
		else
			c++;
	}
	if(b==c)
	cout<<"DRAW"<<endl;
	else if(b<c)
	{
		cout<<"ENGLAND"<<endl;
	}
	else
		cout<<"INDIA"<<endl;
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
 //         << time_taken << setprecision(5);
}