#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
string getString(char x)
{
    string s(1, x);
    return s;  
}
int compare(string a, string b)
{
	for(int i = 0; i < a.length(); ++i)
	{
	    if ((a[i] - '0') < (b[i] - '0'))
	    { 
	        return 1;
	    }
	}
    return 0;
}
int check(string str)
{
    // Compute sum of digits
    int n = str.length();
    int digitSum = 0;
    for (int i=0; i<n; i++)
        digitSum += (str[i]-'0');
 
    // Check if sum of digits is divisible by 9.
    return (digitSum % 9 == 0);
}
void solve2()
{
	string n="";
	cin>>n;
	// cout<<endl;
	string ans="100000000000000000000000000000000000";
	for(int i=n.length();i>=0;i--)
	{
		string a = n.substr(0, i);
		string b = n.substr(i);
		// cout<<a<<" "<<b<<endl;
		if(a!="")
		{
			for(int j=0;j<=9;j++)
			{
				string x= a+getString(j+48)+b;
					// int x1=stoi(x);
					// cout<<x1<<endl;
						
				if(check(x))
				{
					if(compare(ans,x)==1)
						ans=x;
					// ans=min(ans, x1);
				}
					
			}
		}
		else
		{
			for(int j=1;j<=9;j++)
				{
					string x= a+getString(j+48)+b;
					// int x1=stoi(x);
					// cout<<x1<<endl;
						
					// if(x1%9==0)
					// {
					// 	ans=min(ans, x1);
					// }

					if(check(x))
					{
						if(compare(ans,x)==0)
							ans=x;
						// ans=min(ans, x1);
					}
					
				}
		}
	}
	cout<<ans;
}
void solve()
{
	string n="";
	cin>>n;
	int sum=0;
	for(int i=0;i<n.length();i++)
	{
		sum+=n[i]-'0';
	}
	sum=sum%9;
	int x= 9-sum;
	// cout<<x;
	string ans="";
	for(int i=0;i<=n.length();i++)
	{
		ans+="0";
	}
	
	for(int i=n.length();i>=0;i--)
	{
		string a = n.substr(0, i);
		string b = n.substr(i);
		string x1= a+getString(x+48)+b;
		// cout<<x1<<endl;
		if(ans=="0")
		{
			ans=x1;
		}
		else
		{
			if(compare(ans,x1)==1)
				ans=x1;
		}
	}
		cout<<ans;
}
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int k=1;
	while(t--)
	{	
		// out={};
		cout<<"Case #"<<k<<": ";
		solve();
		// solve2();
		cout<<endl;
		k++;
	}
}