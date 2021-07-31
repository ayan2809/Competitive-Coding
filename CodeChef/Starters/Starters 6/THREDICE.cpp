#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int x=0,y=0;
		cin>>x>>y;
		x+=y;
		if(x<=6)
			y=6-x;
		else
		{
			cout<<0<<endl;
			continue;
		}
		if(y==0)
			cout<<y<<endl;
		else if(y==3)
			cout<<0.5<<endl;

		else
			{
				double Number=double(y)/6;
    			cout<<floor(Number * 1000000) / 1000000<<endl;
				
			}
	}
}