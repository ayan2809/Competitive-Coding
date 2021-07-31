#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int u=0,v=0,a=0,s=0;
		cin>>u>>v>>a>>s;
		if(u==1 & v==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			double cal=sqrt(pow(u,2)-2*a*s);
			//cout<<cal<<endl;
			if(cal>v)
			{
				cout<<"No"<<endl;
			}
			else
			{
				cout<<"Yes"<<endl;
			}

		}
			
	}
}