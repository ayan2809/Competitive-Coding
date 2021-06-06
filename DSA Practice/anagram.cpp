#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	vector <int> a(26,0);
	if(s1.length()!=s2.length())
		cout<<"Not an anagram"<<endl;
	else
	{
		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
		for(int i=0;i<s1.length();i++)
		{
			int d= s1[i]-97;
			a[d]++;
		}
		for(int i=0;i<s2.length();i++)
		{
			int d= s2[i]-97;
			a[d]--;
		}
		int f=0;
		for(int i=0;i<26;i++)
		{
			
			if(a[i]!=0)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{
			cout<<"Not an anagram"<<endl;
		}
		else
		{
			cout<<"The strings are angram of each other"<<endl;
		}
	}
}