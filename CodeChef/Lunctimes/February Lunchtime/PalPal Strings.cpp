#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

signed main()
{
	fastio;
	int t=0;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		//cout<<s<<endl;
		set <char> a;
		for(int i=0;i<s.length();i++)
		{
			a.insert(s[i]);
		}
//		for(auto it= a.begin();it!=a.end();++it)
//		{
//			cout<<*it<<" ";
//		}
		
		
		int count1=0,count2=0;
		for(auto it= a.begin();it!=a.end();++it)
		{
			int k=count(s.begin(),s.end(),*it);
			if(k==1)
			{
				count2++;
			}
			else if(k%2==0)
			{
				count1+=k/2;	
			}
			else
			{
				count1+=(k-3)/2;
			}
			
			
		}
		//cout<<count1<<" "<<count2;
		if(count1>=count2)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	
	return 0;
}

