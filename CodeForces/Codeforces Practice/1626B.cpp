#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
bool comp(string a,string b)
{
	if(a.size()>b.size())
		return true;
	if(a.size()==b.size())
	{
		int i=0;
		while(true)
		{
			if(a[i]>b[i])
			return false;
			else if(b[i]<a[i])
			return true;
			i++;
		}
	}
	return false;
}

void solve()
{
	string s;
	cin>>s;
	if(s.length()<2)
	{
		cout<<s<<endl;
		return;
	}
	// vector<string> ans;
	int check=0,x=0,y=0;
	for(int i=s.length()-1;i>0;i--)
	{
		x=s[i]-48;
		y=s[i-1]-48;
		x+=y;
		if(x>9)
		{
			s[i-1]='1';
			s[i]=x%10+48;
			cout<<s<<endl;
			return;
		}
		// string r=s.substr(0, i);
		// r+=to_string(x)+s.substr(i+2);
		// ans.push_back(r);

	}
	x=s[0]-48;
	y=s[1]-48;
	x+=y;
	char c=x+48;
	string ss=c+s.substr(2);
	// sort(ans.begin(),ans.end(),comp);
	// for(auto it: ans)
	// 	cout<<it<<" ";
	// cout<<endl;
	cout<<ss<<endl;
	
}
int main(){
	time_t start, end;
	time(&start);
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