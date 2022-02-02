#include<bits/stdc++.h>
using namespace std;

void removeX(char s[])
{
	if(s[0]=='\0')
	{
		return;
	}
	if(s[0]!='x')
	{
		removeX(s+1);
	}
	else
	{
		int i=1;
		for(;s[i]!='\0';i++)
		{
			s[i-1]=s[i];
		}
		s[i-1]=s[i];
		removeX(s);
	}
}
int length(char s[]){
	if(s[0]=='\0')
	{
		return 0;
	}
	return length(s+1)+1;
}
int main(){
	char str[100];
	cin>>str;
	removeX(str);
	int l= length(str);
	cout<<l<<endl;
}