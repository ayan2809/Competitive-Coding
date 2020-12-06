#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0,b=0,c=0,d=0,e=0;
	if(n>=6)
	d=1;
	for(int i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
		a=1;
		if(islower(s[i]))
		b=1;
		if(isdigit(s[i]))
		c=1;
		
		if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'||s[i]=='+'||s[i]=='-')
		e=1;
	
	}
	int count=a+b+c+d+e;
	if(d==0){
		if((4-count)>(6-n))
		cout<<4-count;
		else
		cout<<6-n;
	}
	else
	{
	cout<<5-count;
}
}
