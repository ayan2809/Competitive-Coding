#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(char input[], int s,int e)
{
	if(e-s==1 || e-s==0)
		return true;
	if(input[s]!=input[e])
		return false;
	return check_palindrome(input, s+1, e-1);

}

int main()
{
	char input[30];
	cin>>input;
	int s=0,e=strlen(input)-1;
	cout<<check_palindrome(input,s,e)<<endl;
}