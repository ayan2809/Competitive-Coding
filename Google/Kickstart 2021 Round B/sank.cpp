#include<iostream>
#include<algorithm>
using namespace std;

bool Compare(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }

    return a.first<b.first;
}

void Answer(pair <int,int> arr[],int n)
{
    int x=-1;
    int start=-1;
    int end=-1;
    int points=0;
    int length=0;

    for(int i=0;i<n;i++)
    {
        int j=i+1;

        while(arr[j].first==arr[i].first && j<n)
        {
            j++;
        }

        int l=j-i;
        if(points<l)
        {
            x=arr[i].first;
            start=arr[i].second;
            end=arr[j-1].second;
            points=j-i;
            length=arr[j-1].second-arr[i].second;
        }
        else if(points==l)
        {
            if(arr[j-1].second-arr[i].second>length)
            {
                 x=arr[i].first;
                start=arr[i].second;
                end=arr[j-1].second;
                points=j-i;
                length=arr[j-1].second-arr[i].second;
            }
        }
    }

    cout<<x<<endl<<start<<endl<<x<<endl<<end<<endl;
}

int main()
{
    int n;
    cin>>n;

    pair<int,int> arr[100];

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;

        arr[i]=make_pair(x,y);
    }

    sort(arr,arr+n,Compare);
    Answer(arr,n);

    return 0;
}