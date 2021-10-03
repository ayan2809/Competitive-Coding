#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void solve()
{
  int n=0;
  cin>>n;
  // int x= n*(n+1)/2;
  // if(x%2==0 && n%2==0)
  // {  
  //   cout<<"YES"<<endl;
  //   vector<int> a;
  //   vector<int> b;
  //   a.push_back(1);
  //   for(int i=4;i<n;i+=3)
  //   {
  //     a.push_back(i);
  //     if(i+1>n)
  //       break;
  //     i+=1;
  //     a.push_back(i);
  //   }
  //   for(int i=2;i<=n;i+=3)
  //   {
  //     b.push_back(i);
  //     if(i+1>n)
  //       break;
  //     i+=1;
  //     b.push_back(i);
  //   }
  //   a.push_back(n);
  //   for(auto it: a)
  //     cout<<it<<" ";
  //   cout<<endl;
  //   for(auto it: b)
  //     cout<<it<<" ";
  //   cout<<endl;
  // }  
  // else
  // {
  //   cout<<"NO"<<endl;
  //   return;
  // }

  if(n%4!=0)
  {
    cout<<"NO"<<endl;
    return;
  }
  cout<<"YES"<<endl;
  vector<int> a;
  vector<int> b;
  int a1=1,b1=n;
  int f=0;
  int check=n/2;
  while(check)
  {
    if(f==0)
    {
      a.push_back(a1);
      a1++;
      f=1;
    }
    else
    {
      a.push_back(b1);
      b1--;
      f=0;
    }
    check--;
  }
  for(int i=a1;i<=b1;i++)
  {
    b.push_back(i);
  }
  sort(a.begin(),a.end()); 
   sort(b.begin(),b.end());
   for(auto it: a)
   cout<<it<<" ";
   cout<<endl;
   for(auto it: b)
   {
    cout<<it<<" ";
   } 
   cout<<endl;
}



int main(){
  // time_t start, end;
  // time(&start);
  IOS;
  ll t=0;
  cin>>t;
  while(t--)
  {
    solve();
  }
  // time(&end);
  // double time_taken = double(end - start);
  // cout << "Time taken by program is : " << fixed
  //        << time_taken << setprecision(5);
}