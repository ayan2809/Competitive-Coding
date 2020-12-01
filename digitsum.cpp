#include <bits/stdc++.h>

using namespace std;
long long int digit(long long int n,long long int k)
{
  if (n == 0)  
       return 0; 
    return (n % 9 == 0) ? 9 : (n % 9); 
}
int main(){
    long long int a=0,b=0;
    long int k=0;
    cin>>a>>k;
    b=a%9;
    b*=k;
    
    cout<<digit(b,k); 
    
}

