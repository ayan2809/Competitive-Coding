#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d1=0,v1=0,d2=0,v2=0,day=0;
	cin>>d1>>v1>>d2>>v2>>day;
	if(d1==d2)
	{
		int a=d1-1;
		double b=(double)day/(v1+v2);
		cout<<ceil(b)+a<<endl;
	}
	else if(d1<d2)
	{
	    int a=d1-1;
	    int d=d2-d1;
	    double k=(double)day/v1;
	    int c=ceil(k);
	    if(c>d)
	    {
	        day=day-d*v1;
	        double g= (double)day/(v1+v2);
	        cout<<ceil(g)+d+a<<endl;
	    }
	    else
	    {
	        cout<<c+a<<endl;
	    }
	}
	else
	{
		int a=d2-1;
	    int d=d1-d2;
	    double k=(double)day/v2;
	    int c=ceil(k);
	    if(c>d)
	    {
	        day=day-d*v2;
	        double g= (double)day/(v1+v2);
	        cout<<ceil(g)+d+a<<endl;
	    }
	    else
	    {
	        cout<<c+a<<endl;
	    }
	}
	return 0;
	//cout<<d1<<" ";
}
