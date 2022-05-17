#include<bits/stdc++.h>
using namespace std;
int editDistance(string s, string t)
{

	// base case
	if(s.size()==0 || t.size()==0)
	{
		return max(s.size(), t.size());
	}

	if(s[0]==t[0])
	{
		return editDistance(s.substr(1), t.substr(1));
	}
	else
	{
		//insert
		int x= editDistance(s.substr(1),t)+1;
		// delete
		int y= editDistance(s,t.substr(1))+1;		
		// replace
		int z= editDistance(s.substr(1), t.substr(1))+1;

		return min(x, min(y, z));
	}	
}
int main()
{

}