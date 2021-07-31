#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n=0;
		cin>>n;
		 ll odd=0,flag=0,even=0;
    for(ll i=0;i<n;i++){
        ll b;cin>>b;
        if(b&1){
            odd++;
        }
        else if(b==2){flag=1;}
       
    }
   // cout<<"ODD  "<<odd<<endl;
    if(odd%2==0){cout<<0;}
    else if(flag==1){cout<<1;}
    else {cout<<-1;}
    
    
    cout<<endl;
}
		// int f=0;
		// ll maxi=*max_element(a.begin(),a.end());
		// if(maxi>=5)
		// {
		// 	f=1;
		// }
		// // for(int i=0;i<n;i++)
		// // {
		// // 	check+=a[i];
		// // 	if(check/(double)(i+1)>1)
		// // 	{
		// // 		f=1;
		// // 		break;
		// // 	}
		// // }
		// if(f==0)
		// {
		// 	cout<<-1<<endl;
		// }
		// else
		// {
			// if((oddcount%2!=0 && evencount%2==0)||(oddcount%2!=0 && evencount%2!=0)||(oddcount%2!=0 && evencount%2==0))
			// {
			// 	if(count>=1)
			// 	{
			// 		cout<<1<<endl;
			// 	}
			// 	else
			// 	{
			// 		cout<<-1<<endl;
			// 	}
			// }
			// else 
			// {
			// 	cout<<0<<endl;
			// }
		//}

	//}
}