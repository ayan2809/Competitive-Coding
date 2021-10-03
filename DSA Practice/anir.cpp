#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int b[n];
        vector<int> v;
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            b[i]=arr[i];
            m[arr[i]]=i;
        }
        sort(arr,arr+n);
        if(k%2!=0)
        {
            int cnt=0;
        for(int i=n-k;i<n;i++)
        {
            cnt++;
            if(cnt==(k/2)+1)
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
        }
        if(k%2==0)
        {
            int cnt=0;
        for(int i=n-k;i<n;i++)
        {
            cnt++;
            if(cnt==(k/2))
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
        }
        for(int i=n-k;i<n;i++)
        {
            v.push_back(m[arr[i]]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<b[v[i]]<<" ";
        }
        cout<<endl;

        
    }

    return 0;
}