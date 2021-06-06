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
		string s;
		cin>>s;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		vector <int> a(26);
		vector <int> b(26);
		int f=0,g=0;
		int prev=s[0];
		for(int i=0;i<s.length();i++)
		{
			int d=s[i]-97;
			if(b[d]>=1)
			{
				g=1;
				break;
			}
			int d2=s[i+1]-97;
			a[d]++;
			if(d2!=d)
			{
				b[d]++;
			}
		}
		if(g==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}

	}
}