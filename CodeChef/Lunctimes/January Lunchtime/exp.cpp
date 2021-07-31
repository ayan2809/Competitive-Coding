#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		int even=0,odd=0;
		
		for(int i=0;i<n;i++)
		{
			int m=0;
			cin>>m;
			if(m%2==0)
			even+=1;
			else
			odd+=1;
		
		}
		cout<<min(odd, even)<<endl;
		
		
	}
}
