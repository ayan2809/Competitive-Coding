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
	ll d=0,n=0,k=0;
	cin>>d>>n>>k;
   	map<int, set<int,greater<int>>> a;
   	int p=0, s=0,e=0;
   	for(int i=0;i<n;i++)
   	{
   		cin>>p>>s>>e;
   		for(int i=s-1;i<e;i++)
   		{
   			a[i].insert(p);
   		}
   	}
   	int answer=0;
   	for(auto it: a)
   	{
   	    int out=0;
   	    auto itr=it.second;
   	    int p=itr.size();
   	    //cout<<p<<endl;
   	    //sort(itr.begin(), itr.end(), greater<int>());
   	    int i=0;
   	    for (itr = s2.begin(); itr != s2.end() && i<k; itr++,i<)
   	    {
   	        out+=itr;
   	    }
   	    answer=max(answer, out);
   	}
   	
   	
   	// for(auto it: a)
   	// {
   	// 	int g= k,ans=0;
   	// 	for (auto itr: it)
   	// 	{
   	// 		//cout<<itr<<" ";
   	// 		if(g==0)
   	// 			break;
   	// 		ans+=itr;
   	// 		g--;
   	// 	}
   	// 	//cout<<endl;
   	// 	maxi=max(maxi, ans);
   	// }
   	cout<<answer<<endl;

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