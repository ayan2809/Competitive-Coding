#include <bits/stdc++.h>

using namespace std;
void solve(string input,string h,long unsigned int index)
{
  if(h.length()==0)
  {
      cout<<"YES"<<endl;
      return;
  }  
  if(h[0]==input[index])
  {
      h=h.substr(1,h.length());
      input=input.substr(index+1,input.length());
  }
  index=input.find(h.substr(0,1));
  cout<<index<<" ";
  if(index>input.length())
  {
      cout<<"NO"<<endl;
      return;
  }
  solve(input,h,index);
  return;

}


void hackerrankInString(string s) {
    string h="hackerrank";
    solve(s,h,0);
    
}

int main()
{
    int q=0;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        hackerrankInString(s);
    }

    return 0;
}

