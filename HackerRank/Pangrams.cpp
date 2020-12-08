#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    //cin>>s;
    getline(cin, s); 
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set <char> a;
    if(s.length()==0)
    cout<<"non pangram";
    else{
        for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        a.insert(s[i]);
    }
    if(a.size()==26)
    cout<<"pangram";
    else
    cout<<"not pangram";
    }
    
    
}

