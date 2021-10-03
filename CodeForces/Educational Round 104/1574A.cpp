#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"

vector<string>result;
    
void helper(int open,int close,int n,string current)
{
    if(current.length()==n*2)
    {
        result.push_back(current);
        return;
    }
    if(open<n)  helper(open+1,close,n,current+"(");
    if(close<open)  helper(open,close+1,n,current+")");
}

 vector<string> generateParenthesis(int n) {
        unordered_set<string> s;
        s.insert("()");
        for(int i=2; i<=n; i++){
            unordered_set<string> new_st;
            for (auto elem: s) {
                for(int j=0; j<elem.size(); j++){
                    string new_s = elem.substr(0,j)+"()"+elem.substr(j,elem.size());
                    new_st.insert(new_s);
                }
            }
            s = new_st;
        }
        vector<string> v(s.begin(), s.end());
        return v;
    }
void solve()
{
	int n=0;
	cin>>n;
	result={};
	//helper(0,0,n,"");
	vector<string> ans= generateParenthesis(n);
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<endl;
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
 //         << time_taken << setprecision(5);
}