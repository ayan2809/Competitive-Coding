#include<bits/stdc++.h>
using namespace std;
void solve(string input,string output)
{
	if(input.length()==0)
	{
		cout<<output<<" ";
		return;
	}
	string g=input.substr(0,1);
	string output1=output+g;
	std::transform(g.begin(), g.end(),g.begin(), ::toupper);
	string output2=output+g;
	input=input.substr(1,input.length());
	solve(input,output1);
	solve(input,output2);
	return;
}
int main()
{
	string s;
	cout<<"Enter your string :";
	cin>>s;
	string output;
	solve(s,output);
}
