#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define endl "\n"

int main()
{
	IOS;
	char * N[1000];
    int M;
    
  
    scanf("%s", N);
    cin>>M;
 
    int i=0;
    //M+=1;

    int n=sizeof(N)/sizeof(N[0]);


    while(M &&(i<n))
    {

        int max_digit_index=i;


        int j=n-1;
        while (j>=i)
        {
            int digitj=(int)N[j]-'0';
            if(digitj>=((int)N[max_digit_index]-'0'))
            {
                max_digit_index=j;
            }
            j--;
        }


        if(max_digit_index==i)
        {
            i++;
        }
        
        else
        {
            swap(N[max_digit_index],N[max_digit_index-1]);
            M--;
        }
        
    }

    //cout<<N<<endl;

    return N;
}