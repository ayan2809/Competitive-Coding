#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,d=0,m=0;
		cin>>n>>d;
		vector <int> a;
		for(int i=0;i<n;i++)
		{
			cin>>m;
		a.push_back(m);
		}
	
		if(d==1)
		{
			cout<<a.size()<<endl;
		}
		else
		{
			int count=0,count2=0,total=0;
		
			for(int i=0;i<n;i++)
			{
				if(a[i]>=80 || a[i]<=9)
				{
					count++;
				}
			}
			count2=n-count;

				total=(count/d)+(count2/d);
				count=count-(count/d)*d;
				count2=count2-(count2/d)*d;
			
				if(count%d!=0)
				 total++;
				if(count2%d!=0)
				total++;
		
				cout<<total<<endl;
		}
	}
}
