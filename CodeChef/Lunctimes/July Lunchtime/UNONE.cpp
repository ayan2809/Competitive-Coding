#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl "\n"
void solve()
{
	ll n=0;
	cin>>n; 
	vector<int> odd,even;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
			even.push_back(a[i]);
		else
			odd.push_back(a[i]);
	}
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	vector<int> out;
	//putting all the even first and then odd
	for(auto it: even)
		out.push_back(it);
	for(auto it: odd)
		out.push_back(it);

	for(auto it: out)
		cout<<it<<" ";
	cout<<endl;


	// int n2=even.size(),m=odd.size();
	// while(n2!=0)
	// {
	// 	if(n2==0)
	// 		break;
	// 	out.push_back(even[even.size()-1]);
	// 	n2--;
	// 	if(m==0)
	// 		break;
	// 	out.push_back(odd[odd.size()-1]);
	// 	m--;
	// 	even.pop_back();
	// 	odd.pop_back();
	// }
	// if(m==0 && n2==0)
	// {
	// 	for(auto it: out)
	// 		cout<<it<<" ";
	// 	cout<<endl;
	// 	return;
	// }
	// else if(m==0 && n2!=0)
	// {
	// 	for(auto it: even)
	// 	{
	// 		out.push_back(it);
	// 	}
	// 	for(auto it: out)
	// 		cout<<it<<" ";
	// 	cout<<endl;
	// 	return;
	// }
	// else if(n2==0 && m!=0)
	// {
	// 	for(auto it: odd)
	// 	{
	// 		out.push_back(it);
	// 	}
	// 	for(auto it: out)
	// 		cout<<it<<" ";
	// 	cout<<endl;
	// 	return;
	// }

	//observation is that odds end with 1 always and
	// even always end with a zero


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