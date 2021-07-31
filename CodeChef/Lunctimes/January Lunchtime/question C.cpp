#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,k=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int one=0,zero=0;
		int bot=1,correct=0,slow=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==0)
			{
				zero+=1;
			}
			if(a[i]==1)
			{
				one+=1;
			}
			if(a[i]!=-1)
			correct+=1;
			if(a[i]>k)
			slow=1;
		}
//		if()
//		bot=1;
		if(correct<ceil(double(n)/2))
		cout<<"Rejected"<<endl;
		else if (slow==1)
		cout<<"Too Slow"<<endl;
		else if((one+zero)==n)
		cout<<"Bot"<<endl;
		else
		cout<<"Accepted"<<endl;
		
	
	}
}
