#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector <int> a;
        vector <int> b;
        
        for(int i=0;i<s.length();i++)
        {
            a.push_back(int(s[i]));
            //cout<<int(s[i])<<" ";
        }
        int k=s.length()-1;
        int m=0;
        for(int i=0;i<s.length()-1;i++)
        {
            //cout<<a[i]<<" "<<a[k]<<endl;
            if(abs(a[i]-a[i+1])==abs(a[k]-a[k-1]))
            m++;
            k--;
        }
        if(m==s.length()-1)
        cout<<"Funny"<<endl;
        else
        cout<<"Not Funny"<<endl;
    }
}

