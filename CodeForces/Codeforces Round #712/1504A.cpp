#include<bits/stdc++.h>
using namespace std;



int checkpal(string string1)
{
	int flag=0;
int length = string1.size();
    
    for(int i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }

}
return flag;
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		string s1=s+"a";
		string s2="a"+s;
		//sort(s1.begin(),s1.end());
		//sort(s.begin(),s.end());
		if(checkpal(s1))
		{
			cout<<"YES"<<endl;
			cout<<s1<<endl;
		}
		else if(checkpal(s2))
		{
			cout<<"YES"<<endl;
			cout<<s2<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		//cout<<s<<endl;
	}
	

}