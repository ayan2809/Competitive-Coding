#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int a=0,b=0;
		cin>>a>>b;
		string s;
		cin>>s;
		vector <char> u ;
		u.push_back('U');
		u.push_back('L');
		u.push_back('R');
		u.push_back('D');
			
		vector<char> ch;
		for(int i=0;i<s.length();i++)
		{
			//u.insert(s[i]);
			ch.push_back(s[i]);
		}
		int k=u.size();
		vector <int> d(k);
    	int j=0;
//    	for (auto it = u.begin(); it != u.end(); ++it)
//            {
//                                 d[j] =*it;
//                                 j++;
//            }
    	vector <int> e(4);
    	for(int i=0;i<4;i++)
    	{
    		e[i]=count(ch.begin(), ch.end(), u[i]);
    		//cout<<e[i]<<" ";
		}
		int count1=0,count2=0;
		if(a>0)
		{
			if(e[2]>=a)
			count1++;
			
		}
		if(a<0)
		{
			if(e[1]>=-a)
			count1++;
		}
		if(b>0)
		{
			if(e[0]>=b)
			count2++;
			
		}
		if(b<0)
		{
			if(e[3]>=-b)
			count2++;
		}
		if(a==0)
		count1++;
		if(b==0)
		count2++;
		if(count1==1 && count2==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
}
