#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int j=1;
	while(t--)
	{
		
		int n=0,k=0;
		cin>>n>>k;
		string s="";
		cin>>s;
		int len=s.length();
		int count=0;
		for(int i=1;i<=(int)len/2;i++)
		{
			if(s[i-1]!=s[n-i])
			count++;
			//cout<<i<<endl;
		}
		
		//cout<<count<<endl;
		
		cout<<"Case #"<<j<<": "<<abs(k-count)<<endl;	
		j+=1;
	}
	
	
}
