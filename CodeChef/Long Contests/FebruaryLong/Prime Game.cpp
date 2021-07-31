#include<bits/stdc++.h>

#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
const int mxN=1e6+5;
int ans[mxN];
bool prime[mxN];
 
void precompute(){
 
//  for(int i=0;i<mxN;i++){
//    prime[i]=true;
//  }
vector<int>vect;
memset(prime, true, sizeof(prime));
 
//  prime[0]=false;
//  prime[1]=false;
 
  for(int p=2;p*p<mxN;p++){
    if(prime[p]==true){
      for(int i=p*p;i<mxN;i+=p){
        prime[i]=false;
      }
    }
  }
 
//  ans[0]=0;
//  ans[1]=0;
 
  for(int i=2;i<mxN;i++){
    if(prime[i])
    vect.push_back(i);
  }
  auto it = vect.begin();
    int cnt = 0;
    for (int i = 0; i < mxN; i++)
    {
        if(*it <= i)
        {
            ++cnt;
            ++it;
        }
        ans[i] = cnt;
    }
}


 

signed main()
{
	fastio;
//	ios_base::sync_with_stdio(0);
//  	cin.tie(0);
  
	precompute();
	int t=0;
	
	cin>>t;
	while(t--)
	{
		 int x,y;
   cin>>x>>y;
   
//   for(int i=0;i<=mxN;i++)
//   cout<<ans[i]<<" ";
   
  if(ans[x]<=y)
	 printf("Chef\n");
  else
     printf("Divyam\n");
	}
	
	return 0;
}
