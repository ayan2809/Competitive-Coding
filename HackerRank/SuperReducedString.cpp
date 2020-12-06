#include<bits/stdc++.h>
using namespace std;
void solve(int index,string input)
{
	if(index == input.length()-1 ||input.length()==1 ||input.length()==0)
	{
		if(input.length()==0)
		cout<<"Empty String";
		else
		cout<<input;
		return;
	}
	if(input[index]==input[index+1])
	{
		input=input.substr(0,index)+input.substr(index+2,input.length());
		index--;
		//cout<<input<<" ";
		solve(index, input);
	}
	else {
		index++;
		solve(index,input);
	}
    return;
}
int main()
{
    string s;
    cin>>s;
    string output;
    
    solve(0,s);
    
}
