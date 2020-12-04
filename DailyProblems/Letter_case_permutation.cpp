#include<bits/stdc++.h>
using namespace std;
void solve(string input,string output)
{
	if(input.length()==0)
	{
		cout<<output<<" ";
		return;
	}
	string output1;
	string output2;
	if(isdigit(input[0]))
	{
		output1=output+input[0];
		output2=output+input[0];
	}
	else
	{
		if(islower(input[0]))
		{
			string g=input.substr(0,1);
			output1=output+g;
			std::transform(g.begin(), g.end(),g.begin(), ::toupper);
			output2=output+g;
		}
		else
		{
			string g=input.substr(0,1);
			std::transform(g.begin(), g.end(),g.begin(), ::tolower);
			output1=output+g;
			std::transform(g.begin(), g.end(),g.begin(), ::toupper);
			output2=output+g;
		}	
	}
	input=input.substr(1,input.length());
	//#cout<<input<<" ";
	solve(input,output1);
	solve(input,output2);
	return;
}
int main()
{
	string s;
	cout<<"Enter the string :";
	cin>>s;
	string output;
	solve(s,output);
}
