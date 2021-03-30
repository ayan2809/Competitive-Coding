#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll largest(ll n1,ll n2, ll n3)
{
	//ll n1, n2, n3;

    //cout << "Enter three numbers: ";
    //cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
        return n1;

    if(n2 >= n1 && n2 >= n3)
       return n2;
    
    if(n3 >= n1 && n3 >= n2)
        return n3;
  
    //return 0;
}

ll smallest(ll a,ll b,ll c)
{
	 if (a <= b && a <= c) 
        return a; 
  
    else if (b <= a && b <= c) 
       return b; 
  
    else
        return c;
}
ll smallest2(ll a,ll b,ll c,ll g,ll k, ll m)
{
	 if (a <= b && a <= c ) 
        return g; 
  
    else if (b <= a && b <= c ) 
       return k; 
  
    else
        return m;
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		ll a=0,b=0,c=0,d=0;
		ll f=0;
		ll mini=0;
		cin>>a>>b>>c>>d;
		//if(a>b && a>c && a>d)
		//{
			//mini=largest(b,c,d);
			
			if(a%c==0 || a%b==0 || a%d==0)
				{
				cout<<0<<endl;
				continue;
				}
				
			 f=ceil(double(a)/double(b));
			//cout<<mini<<" "<<f<<" ";
			ll g=(f*b);
			f=0;
			f=ceil(double(a)/double(c));
			ll k=(f*c);
			f=0;
			f=ceil(double(a)/double(d));
			ll m=(f*d);	
			cout<<smallest(g,k,m)-a<<endl;
			
		//}
//		else if(a==c || a==b || a==d)
//		cout<<0<<endl;
//		else 
//		{
//			mini=smallest(b,c,d);
//			cout<<mini-a<<endl;
//		}
	}
}
