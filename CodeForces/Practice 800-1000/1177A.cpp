#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	string s;
	for(int i=1;i<=10000;i++)
	{
		string str=to_string(i);
		s+=str;
	}
	cout<<s[n-1]<<endl;
}