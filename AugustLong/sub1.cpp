#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
    long long int n,H,P;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>H>>P;
        while(1!=0)
        {
            H=H-P;
            P/=2;
            if(H<=0){
            cout<<"1"<<endl;
            break;
                }
            if(P==0)
            {
            cout<<"0"<<endl;
            break;
        }}
        
    }
    
}
