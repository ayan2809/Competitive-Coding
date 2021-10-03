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
	ll n=0;
	cin>>n;
	string s;
	cin>>s;
	vector<int> left;
    vector<int> right;
    int maxil=INT_MIN;
    int maxir=INT_MAX;
    for(int i=0;i<s.length();i++)
    {
    	int x= n-i-1;
    	if(s[i]=='1')
        {
        	maxil=max(i, maxil);
        }
        left.push_back(maxil);
        
        if(s[x]=='1')
        {
            maxir=min(x, maxir);
        }
            right.push_back(maxir);
        
    }
    //reverse(right.begin(), right.end());
    ll sum=0;
    for(int i=0;i<n;i++)
    {
    	if(left[i]!=INT_MIN && right[i]!=INT_MAX)
    	{
    		sum+=min(abs(left[i]-i), abs(right[i]-i));
    	}
    	else if(left[i]==INT_MIN)
    	{
    		sum+=abs(right[i]-i);
    	}
    	else if(right[i]==INT_MAX)
    	{
    		sum+=abs(left[i]-i);
    	}
    }
    cout<<sum<<endl;

}
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int k=1;
	while(t--)
	{	
		
		cout<<"Case #"<<k<<": ";
		solve();
		//cout<<endl;
		k++;
	}
}