#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	int k=1;
	while(t--)
	{	cout<<"Case #"<<k<<": ";
		int n=0;cin>>n;
		string s;
		cin>>s;
		int g=1;
		char ch=s[0];
		for(int i=0;i<s.length();i++)
		{
			// for(int j=i+1;j<s.length();j++)
			// {

			// }
			if(s[i]>ch)
			{
				g++;
				ch=s[i];
			}
			else
			{
				g=1;
				ch=s[i];
			}
			cout<<g<<" ";
		}
		cout<<endl;
		k++;
	}
}