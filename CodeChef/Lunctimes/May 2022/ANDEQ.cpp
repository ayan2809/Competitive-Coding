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
	int n=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector <int> check(32,0);
	for(auto it: a)
    {
        for(int j=0;j<32;j++)
        {
            check[j]+=it>>j&1;
            // cout<<check[j]<<" ";         
        }
        // cout<<endl;
    }
    int x=a[0];
    for(int i=1;i<n;i++)
    {
    	x&=a[i];
    }
    cout<<x<<endl;
    // int count=0;
    // for(auto it: a)
    // {
    // 	if(it==x)
    // 		count++;
    // }
    // count=n-count;
    int out=0;

    for(int i=0;i<n;i++)
	 {  if(a[i]==x) 
	 		continue;
	    if(i==(n-1)) 
	    {
	    	out++; 
	    	continue;
	    }
	    a[i+1]=a[i]&a[i+1];
	    out++;
	 }
    // for(auto it: check)
    	// cout<<it<<" ";
    // cout<<endl;
	 cout<<out<<endl;

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