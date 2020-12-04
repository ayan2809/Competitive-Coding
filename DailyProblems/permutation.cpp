#include<bits/stdc++.h>
using namespace std;
void solve(string input,string output)
{
	if(input.length()==0)
	{
		cout<<output<<" ";
		return;
	}
	string output1=output+"_"+input[0];
	string output2=output+input[0];
	input=input.substr(1,input.length());
	solve(input,output1);
	solve(input,output2);
	return;
	
	
	
}
int main()
{
	string s;
	cout<<"Enter the string and find the pattern: ";
	cin>>s;
	string output=s.substr(0,1);
	solve(s.substr(1,s.length()),output);
	
}
