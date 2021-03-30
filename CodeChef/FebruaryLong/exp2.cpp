// C++ program to convert 12 hour to 24 hour
// format
#include<bits/stdc++.h>
using namespace std;
void check(string a,string b, string c)
{
	
	int f=0,k=0,g=0;
	
	int h1 = (int)a[1] - '0';
    int h2 = (int)a[0] - '0';
    int hh1 = (h2 * 10 + h1 % 10);
    
     h1 = (int)b[1] - '0';
    h2 = (int)b[0] - '0';
    int hh2 = (h2 * 10 + h1 % 10);
    
    h1 = (int)c[1] - '0';
     h2 = (int)c[0] - '0';
    int hh3 = (h2 * 10 + h1 % 10);
   //cout<<hh1<<" "<<hh2<<" "<<hh3<<endl;
    
    if(hh1==hh2)
    k+=1;
    if(hh1==hh3)
    g+=1;
    
    if(hh1>=hh2 && hh1<=hh3)
    {
    	f+=1;
	}
    
    //cout<<hh1<<" "<<hh2<<" "<<hh3<<endl;
    
     h1 = (int)a[4] - '0';
     h2 = (int)a[3] - '0';
    int mm1 = (h2 * 10 + h1 % 10);
    
     h1 = (int)b[4] - '0';
    h2 = (int)b[3] - '0';
    int mm2 = (h2 * 10 + h1 % 10);
    
    h1 = (int)c[4] - '0';
     h2 = (int)c[3] - '0';
    int mm3 = (h2 * 10 + h1 % 10);
    
    if(f==0)
    {
    	cout<<0;
	}
	else if(f==1)
	{
		if(k==0 && g==0)
		{
			cout<<1;
			return;
		}
		else if(k==1 && g==0)
		{
			if(mm1>=mm2)
			{
				cout<<1;
				return;
			}
			else
			{
				cout<<0;
				return;
			}
		}
		
		else if(k==0 && g==1)
		{
			if(mm1<=mm3)
			{
				cout<<1;
				return;
			}
			else
			{
				cout<<0;
				return;
			}
		}
		else
		{
			if(mm1>=mm2 && mm1<=mm3)
			cout<<1;
			else
			cout<<0;
		}
		
		
	}
//	else if(k==0 && f==0)
//	{
//		cout<<0;
//	}
//    else if(k==0 && f==1)
//    {
//    	cout<<1;
//	}
//	else if(k==1 && f==1)
//	{
//		cout<<1;	
//	}
//	else if(k==1 &&f==0)
//	{
//		cout<<0;
//	}
//	else
//	{
//		if(mm1>=mm2 && mm1<=mm3)
//    	{
//    	f+=1;
//		}
//		if(f==2)
//		cout<<1;
//		else
//		cout<<0;
//	}
    
    
    
    //cout<<mm1<<" "<<mm2<<" "<<mm3<<endl;
    
    
}

string solve(string str)
{
	// Get hours
	int h1 = (int)str[1] - '0';
	int h2 = (int)str[0] - '0';
	int hh = (h2 * 10 + h1 % 10);
	string final;
	stringstream ss;
	string s;

	// If time is in "AM"
	if (str[5] == 'A')
	{
		if (hh == 12)
		{
			final=final+"00";
			for (int i=2; i <= 4; i++)
				final+=str[i];
		}
		else
		{
			for (int i=0; i <= 4; i++)
				final+=str[i];
		}
	}

	// If time is in "PM"
	else
	{
		if (hh == 12)
		{
			final+= "12";
			for (int i=2; i <= 4; i++)
				final+=str[i];
		}
		else
		{
			hh = hh + 12;
			ss<<hh;
			ss>>s;
			final+=s;
			for (int i=2; i <= 4; i++)
				final+=str[i];
		}
	}
	return final;
}

// Driver code
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
string str = "07:05:45PM";
int t=0;
cin>>t;
while(t--)
{
	string s1,s2;
	cin>>s1>>s2;
	string a=solve(s1+s2);
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s3,s4,s5,s6;
		cin>>s3>>s4>>s5>>s6;
		//solve(str);
		//cout<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<endl;
		
		string b=solve(s3+s4);
		
		string c=solve(s5+s6);
		
		//cout<<a<<" "<<b<<" "<<c<<endl;
		check(a,b,c);
	}
	cout<<endl;
}
//print24(str);
return 0;
}

