#include<bits/stdc++.h>
using namespace std; 
#define endl "\n"
#define maxi 20
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
void findSubSeq(string str, int n, int index = -1, string curr = "")
{
    
    if (index == n)
        return;
 
    if (!curr.empty()) 
    {
    	//ans[stoi(curr,0,2)]=curr;
    	//int x= 
    	ans.insert(stoi(curr, 0, 2));
        //cout << curr << "\n";
    }
 
    for (int i = index + 1; i < n; i++) {
 
        curr += str[i];
        findSubSeq(str, n, i, curr);
 
        // backtracking
        curr = curr.erase(curr.size() - 1);
    }
    return;
}
int  solve(string s)
{
	findSubSeq(s,s.length());
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
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	time_t start, end;
	time(&start);
	string S;
	cin>>S;
	int out_;
	out_= solve(S);
	cout<<out_;
	time(&end);
	double time_taken = double(end - start);
	cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
}