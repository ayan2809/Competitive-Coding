#include<iostream>
#include<algorithm>
using namespace std;


bool pt_comp(pair<int, int> a, pair<int, int> b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first<b.first;
}

void search(pair <int, int> arr[], int n)
{
    int y=-1;
    int start=-1;
    int end=-1;
    int points=0;
    int length=0;
    
    for(int i=0; i<n; i++)
    {
        int j=i+1;
        while(arr[j].second==arr[i].second && j<n)
            j++;
        int l=j-i;
        if(points<l)
        {
            y=arr[i].second;
            start=arr[i].first;
            end=arr[j-1].first;
            points=j-i;
            length=arr[j-1].first-arr[i].first;
        }
        else if(points==1)
        {
            if(arr[j-1].first-arr[i].first>length)
            {
                y=arr[i].second;
                start=arr[i].first;
                end=arr[j-1].first;
                points=j-1;
                length=arr[j-1].first-arr[i].first;
                
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i].second==y)
        {
            cout<<arr[i].first<<endl;
            cout<<arr[i].second<<endl;
            break;
        }
        break;
    }

    cout<<y<<endl<<end<<endl<<y<<endl;
    
    
   
}


int main()
{
    int n;
    cin>>n;
    pair<int,int> arr[100]; 
    
    
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        
        arr[i]=make_pair(x,y);
        
    }
    
    sort(arr,arr+n,pt_comp);
    search(arr,n);
   
    
    
    
}