#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int a,n,b,total;
	
	int j;
	
	for(int i=0;i<t;i++)
	{
		total=0;
		
		cin>>n>>a>>b;
   string s;
		cin>>s;
		for(int j=0;j<n;j++)
        {
            if(s[j]=='0')
            total+=a;
            if(s[j]=='1')
            total+=b;
        }
		
		cout<<total<<endl;
	}
}