#include<iostream>
#include<string>
#include"stdio.h"
using namespace std;
class name
{   
    public:
    int sumofthreenames[3];

    int sum_first(char str[])
    {
        int sum=0;
        for(int i=0;str[i]!='\n';i++)
        {
            sum+=(int)str[i];
        }
        cout<<sum;
        sumofthreenames[0]=sum;
        return sum;
    }
    int sum_second(char str[])
    {
        int sum=0;
        for(int i=0;str[i]!='\n';i++)
        {
            sum+=(int)str[i];
        }
        sumofthreenames[1]=sum;
        cout<<sum;
        return sum;
    }
    int sum_third(char str[])
    {
        int sum=0;
        for(int i=0;str[i]!='\n';i++)
        {
            sum+=(int)str[i];
        }
        sumofthreenames[2]=sum;
        cout<<sum;
        return sum;
    }
    
};
int main()
{
    char name1[30],name2[30],name3[30];
    cout<<"enter first name:";
    cin>>name1;
    cout<<"enter second name:";
    cin>>name2;
    cout<<"enter third name:";
    cin>>name3;
    name obj;
    cout<<obj.sum_first(name1);
    cout<<obj.sum_second(name2);
    cout<<obj.sum_third(name3);

    return 0;
}
