#include<bits/stdc++.h>
using namespace std;
void solve(int index,string input,string output)
{
	//cout<<input<<" ";
    if(index==input.length()-1|| input.length()==0)
    {
    	if(input.length()==0)
    	cout<<"Empty String";
    	else
        cout<<input;
        return;
    }
    if(input[index]==input[index+1])
    {
    	cout<<input<<endl;
    	cout<<index<<" ";
        input.erase(index,index+1);
        index=0;
        cout<<input<<endl;
    }
    else
    {
        index++;
        //output=output+input[0];
        //input=input.substr(1,input.length());
    }
    
    solve(index,input,output);
    return;
}
int main()
{
    string s;
    cin>>s;
    string output;
    
    solve(0,s,output);
    
}
