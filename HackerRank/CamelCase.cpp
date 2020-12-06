#include<bits/stdc++.h>
using namespace std;
void solve(int index,string input,int count)
{
	if(index==input.length()-1)
	{
		cout<<count;
		return;
	}
	if(isupper(input[index]))
	{
		solve(index+1,input,count+1);
	}
	else
	{
		solve(index+1,input,count);
	}
	return;
	
	
}
int main()
{
	string s;
	cin>>s;
	int count=0;
//	for(int i=0;i<s.length();i++)
//	{
//		if(isupper(s[i]))
//		count++;
//	}
	//cout<<count;
	solve(0,s,1);
}
