#include<bits/stdc++.h>
using namespace std;
void solve(string output,string input,vector <string> &unique)
{
	if(input.length()==0)
	{
		if(std::count(unique.begin(), unique.end(), output)==0)
		unique.push_back(output);
		cout<<output<<" ";
		return;
	}
	string output1=output;
	string output2=output+input[0];
	input=input.substr(1, input.size());
	solve(output1,input,unique);
	solve(output2,input,unique);
	return;
}

int main()
{
	string input;
	vector <string> unique;
	cout<<"Enter your string: ";
	cin>>input;
	std::string output;
	solve(output,input,unique);
	cout<<endl<<"The unique strings are: ";
	sort(unique.begin(),unique.end());
	for(int i=0;i<unique.size();i++)
	{
		cout<<unique[i]<<" ";
	}
}
