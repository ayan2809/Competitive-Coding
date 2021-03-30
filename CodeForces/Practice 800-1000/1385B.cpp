#include<bits/stdc++.h>
using namespace std;
int check(vector<int> b,int n)
{
	for(auto it=b.begin();it!=b.end();++it)
	{
	
	}
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		set <int>a;
		vector <int> b;
		int m=0;
		for(int i=0;i<n*2;i++)
		{
			cin>>m;
			a.insert(m);
			if(count(b.begin(),b.end(),m)==0)
			{
				b.push_back(m);
			}
			//cout<<m<<" ";	
		}
		//cout<<endl;
	
		for(auto it=b.begin();it!=b.end();++it)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}
