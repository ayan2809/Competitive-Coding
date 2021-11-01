#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void solve()
{
    int n=0;
    cin>>n;
    string s;
    cin>>s;
    //cout<<s<<endl;
    stack<char> st;
    bool answer=true;
    for(int i=0;i<n;i++)
    {
        //cout<<st.size()<<endl;
        if(s[i]=='H' && st.size()==0)
        st.push(s[i]);
        else if(s[i]=='T' && st.size()==1)
            st.pop();
        else if((s[i]=='H' && st.size()>=1 ))
        {
            //cout<<"HEllo";
            answer=false;
            break;
        }
        else if(s[i]=='T' && st.size()==0)
        {
            answer=false;
            break;
        }
    }
    if(st.size()>0)
        answer=false;
    if(answer)
    {
        cout<<"Valid"<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
}
int main(){
    // time_t start, end;
    // time(&start);
    IOS;
    ll t=0;
    cin>>t;
    while(t--)
    {
        solve();
    }
    // time(&end);
    // double time_taken = double(end - start);
    // cout << "Time taken by program is : " << fixed
    //      << time_taken << setprecision(5);
}