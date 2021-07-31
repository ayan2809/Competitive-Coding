#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        string s;
        cin>>s;
        set<char> ch;
        for(int i=0;i<s.length();i++)
        {
            ch.insert(s[i]);
        }
        int f=0;
        for(auto it=ch.begin();it!=ch.end();++it)
        {
            if(count(s.begin(),s.end(),*it)%2==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"AVENGER"<<endl;
        else
        cout<<"SPAM"<<endl;
    }
	// your code goes here
	return 0;
}

