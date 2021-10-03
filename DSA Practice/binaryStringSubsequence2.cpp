#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
set<int> ans;
bool isPrime(int x)
{
    if (x <= 1)
        return false;
 
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
 
            // Return not prime
            return false;
    }
 
    // If prime return true
    return true;
}
string subsequence(string s, int binary, int len)
{
    string sub = "";
    for (int j = 0; j < len; j++)
 
        // check if jth bit in binary is 1
        if (binary & (1 << j))
 
            // if jth bit is 1, include it
            // in subsequence
            sub += s[j];
 
    return sub;
}
 
// function to print all subsequences
void possibleSubsequences(string s){
 
    // map to store subsequence
    // lexicographically by length
    map<int, set<string> > sorted_subsequence;
 
    int len = s.size();
     
    // Total number of non-empty subsequence
    // in string is 2^len-1
    int limit = pow(2, len);
     
    // i=0, corresponds to empty subsequence
    for (int i = 1; i <= limit - 1; i++) {
         
        // subsequence for binary pattern i
        string sub = subsequence(s, i, len);
         
        // storing sub in map
        sorted_subsequence[sub.length()].insert(sub);
    }
 
    for (auto it : sorted_subsequence) {
         
        // it.first is length of Subsequence
        // it.second is set<string>
        // cout << "Subsequences of length = "
        //      << it.first << " are:" << endl;
              
        for (auto ii : it.second)
             
            // ii is iterator of type set<string>
            //cout << ii << " ";
        	ans.insert(stoi(ii, 0, 2));
         
        //cout << endl;
    }
}
int solve()
{
	string s="";
	cin>>s;
	possibleSubsequences(s);
	
	for(auto it= ans.rbegin(); it!=ans.rend();it++)
	{
		if(isPrime(*it))
		{
			
			return *it;
			//break;
		}
	}
}
int main(){
	IOS;
	ll t=0;
	time_t start, end;
	time(&start);
	cout<<solve()<<endl;
	time(&end);
	double time_taken = double(end - start);
	cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
}