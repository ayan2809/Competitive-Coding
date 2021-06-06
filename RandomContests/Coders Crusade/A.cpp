#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,y=0;
    cin>>x>>y;
    int a[x][y];
    int count1=0,count2=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }
    int rowcount=0,f=0;
    for(int i=0;i<x;i++)
    {
        int x=a[i][0];
        for(int j=0;j<y;j++)
        {
            if(x==a[i][j])
            {
                f++;
            }
        }
        if(f==y)
        {
            rowcount++;
        }
        f=0;
    }

    int g=(2*(x*y))-2;
    if(count1-count2==count1)
        cout<<g+rowcount<<endl;
    else if(count2-count1== count2)
        cout<<g+rowcount<<endl;
    else
    {
        cout<<(g-abs(count2-count1))+rowcount<<endl;
    }

}