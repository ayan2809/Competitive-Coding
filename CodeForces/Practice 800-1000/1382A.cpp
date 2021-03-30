#include<bits/stdc++.h>
using namespace std;
const int N=1005;
vector <bool> ans(N);

int main()
{
	
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,m=0;
		cin>>n>>m;
		vector <int> a(n);
		vector<int> b(m);
		int k=-1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ans[a[i]]=true;
		}
		for(int j=0;j<m;j++)
		{
			cin>>b[j];
			if(ans[b[j]])
			k=b[j];
		}
		std::fill(ans.begin(),ans.end(),false);
		if(k==-1)
		cout<<"NO"<<endl;
		else
		cout<<"YES\n1 "<<k<<endl;
//		int mini=n,count=0,k=0;
//		for(int i=0;i<n;i++)
//		{
//			count=0;
//			for(int j=0;j<m;j++)
//			{
//				if(a[i]==b[j])
//				{
//					count++;
//				}
//				
//			}
//			if(count<=mini && count!=0)
//			{
//				mini=count;
//				k=a[i];
//			}
//		}
//		if(k==0)
//		cout<<"NO"<<endl;
//		else
//		{
//			cout<<"YES"<<endl;
//			cout<<mini<<" ";
//			for(int i=0;i<mini;i++)
//			{
//			cout<<k<<" ";
//			}
//			cout<<endl;
//		}
		
		
		
		
	}
}

