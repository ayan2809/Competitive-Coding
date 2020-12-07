#include<bits/stdc++.h>
using namespace std;
void solve(int input,int x, int output,int k,int sum)
{
	if(input==x)
	{
//		for(int i=0;i<x;i++)
//		{
//			cout<<output[i]<<" ";
//		}
//		cout<<endl;
		return;
	}
	//cout<<input<<endl;
	int out1=input;
	int out2=-input;
	input++;
	//output.push_back(out1);
	cout<<out1<<" ";
	solve(input,x,out1,k--,sum+out1);
	///output.push_back(out2);
	solve(input,x,out2,k,sum+out2);
	return;
	
	
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,k=0;
		cin>>n>>k;
		if(n==k)
		{
			for(int i=1;i<=n;i++)
			cout<<i<<" ";
		}
		else
		{
			int sum=0;
			vector <int> output;
			solve(1,n,output,k,0);	
//			for(int i=0;i<output.size();i++)
//			{
//				cout<<output[i]<<" ";
//				}	
		}
		cout<<endl;
	}
	
	
}
