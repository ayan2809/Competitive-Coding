#include<bits/stdc++.h>
using namespace std; 
#define ll long long

#define endl "\n"

int main()
{
   int n=0;
   cin>>n;
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   set<char> ch;
   set<char> ch2;
   for(int i=0;i<n/2;i++)
   {
        ch.insert(s[i]);
   }
   for(int i=n/2;i<n;i++)
   {
        ch2.insert(s[i]);
   }
   int count=0;
   for(auto it:ch)
   {
        auto itr= ch2.find(it);
        if(itr!=ch2.end())
            count++;
   }
   cout<<count<<endl;

}
