#include<bits/stdc++.h>
using namespace std;
void solve(string input,string s,int &count)
{
	if(input.length()==0){
			return;
	}		
		if(input[0]!='S')
		count++;
		if(input[1]!='O')
		count++;
		if(input[2]!='S')
		count++;
	input=input.substr(3,input.length());
	solve(input,s,count);
	return;
}
int main()
{
	string s1;
	cin>>s1;
	string s2="SOS";
	int count=0;

solve(s1,s2,count);
cout<<count;
	
}
