#include<bits/stdc++.h>
using namespace std;
void solve(vector <string> &a,int open, int close,string output)
{
	
	if( open==0 && close==0)
	{
		a.push_back(output);
		return;
	}

	if(open!=0)
	{
		string output1=output+"(";
		solve(a,open-1,close,output1);
		
	}
	if(close>open)
	{
		string output2=output+")";
		solve(a,open,close-1,output2);	
	}
		
	return;
	
}
int main()
{
	int n;
	cout<<"Enter the number :";
	cin>>n;
	string output;
	int m=n*2;
	vector <string> a;
	solve(a,n,n,output);
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<"  ";
	}
	
}
//(output[0]=='(')&& (output[output.length()-1]==')') &&
