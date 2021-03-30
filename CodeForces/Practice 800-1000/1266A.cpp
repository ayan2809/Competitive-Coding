#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	cin>>n; 
	while(n--)
	{
		//int m=0;cin>>m;
		string s;
		cin>>s;
		int count=0;
		int zerocount=0;
		int digitsum=0;
		// stringstream ss;  
  // 		ss<<m;  
  // 		string s;  
  // 		ss>>s;
		stringstream geek(s);
  
    // The object has the value 12345 and stream
    // it to the integer x
    	int m = 0;
    	geek >> m;
    	//cout<<s<<" "<<m<<endl;
  		int i=0;  
  		//cout<<s.length()<<endl;
		while(i!=s.length())
		{
			//cout<<s[i]<<" ";
			//int d=m%10;
			 int d=(int)s[i];
			 d-=48;
			digitsum+=d;
			if(s[i]=='0')
			{
				zerocount++;
			}
			if(d%2==0)
			{
				count++;
				//cout<<d<<" "<<endl;
			}
			m=(int)m/10;
			i++;
		//	cout<<d<<" ";
		}
		//cout<<digitsum<<" "<<count<<" "<<zerocount<<endl;
		if(digitsum%3==0 && count>=2 && zerocount >=1)
		{
			cout<<"red"<<endl;
		}
		else
		{
			cout<<"cyan"<<endl;
		}
	}

}