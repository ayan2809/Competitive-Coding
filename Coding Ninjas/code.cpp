#include<bits/stdc++.h>
using namespace std;
int reversDigits(int num) {
   
   int rev = 0 ;
   
   while(num != 0){     
      int rem = num % 10 ;
      num /= 10 ;
      
      if(rev > INT_MAX/10 || rev == INT_MAX/10 && rem > 7){
         return 0 ;
      }
      
      if(rev < INT_MIN/10 || rev == INT_MIN/10 && rem < -8){
         return 0 ;
      }
      
      rev = rev*10 + rem ;
   }
   
   return rev ;
   
}
int main()
{
      int num = 0;
      cin>>num;
      int ans=reversDigits(num);
      if(ans<=32767 && ans>=-32768)
         cout<<ans<<endl;
      else
         cout<<"Wrong Value"<<endl;
}  