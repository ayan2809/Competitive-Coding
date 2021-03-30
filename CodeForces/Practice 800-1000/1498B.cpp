#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll getIndex(vector<int> v, ll K)
{
    auto it = find(v.begin(), v.end(), K);
 
    // If element was found
    if (it != v.end())
    {
     
        // calculating the index
        // of K
        ll index = it - v.begin();
        return index ;//<< endl;
    }
    else {
        // If the element is not
        // present in the vector
        return -1;// << endl;
    }
}
ll nextFit(vector <ll> weight, ll n, ll c)
{
	// Initialize result (Count of bins) and remaining
	// capacity in current bin.
	ll res = 0, bin_rem = c;

	// Place items one by one
	for (ll i = 0; i < n; i++) {
		// If this item can't fit in current bin
		if (weight[i] > bin_rem) {
			res++; // Use a new bin
			bin_rem = c - weight[i];
		}
		else
			bin_rem -= weight[i];
	}
	return res;
}
ll mod(ll a, ll m)
{
    return (a%m + m) % m;
}
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n=0,w=0;
		cin>>n>>w;
		vector <ll> a(n);
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}

		// ll height=floor((double)sum/(double)w);
		// //cout<<height<<endl;
		// sum-=w*height;
		// //ll round=sum%w;
		// if(sum>0)
		// {
		// 	height++;
		// }

		sort(a.begin(),a.end());

		ll height=1;
		ll k=w;
		//int j=n-1;
		while(a.size()!=0)
		{
			if(a.size()!=0 && k<(*max_element(a.begin(),a.end())))
			{
				if(a.size()!=0 && k<(*max_element(a.begin(),a.end())))
				{
					
				}
				k=w;
				height++;
			}
			else
			{
				k-=a[a.size()-1];
				a.erase(a.begin()+a.size()-1);
			}
			cout<<k<<endl;
		}
		//ll height= nextFit(a,n,w);
		//height++;
		cout<<height<<endl;
	}
}