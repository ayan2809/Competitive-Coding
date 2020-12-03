#include<bits/stdc++.h>
using namespace std;
void solve(char s,char d,char h, int n, int &count)
{
	count++;
	if(n==1)
	{
		cout<<"Moving from "<<s<<" to "<<h<<endl;
		return;
	}
	solve(s,h,d,n-1,count);
	cout << "Move disk " << n << " from rod " << s << 
                                " to rod " << d << endl;  
	solve(s,d,h,n-1,count);
}
int main()
{
	int n=0,count=0;
	cout<<"Enter the number of rods :";
	cin>>n;
	solve('a','c','b',n,count);
	
	
		
}
