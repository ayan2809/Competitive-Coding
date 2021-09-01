#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
bool checker(string a, string b)
{
	for(int i=0;i<a.length();i++)
	{
		if(a[i]==b[i])
			return false;
	}
	return true;
}
vector <string> out;
string check="";
void permute(string s , string answer)
{
	sort(s.begin(), s.end());
	do{
		if(checker(s,check))
		{
			out.push_back(s);
			break;
		}

	}while (next_permutation(s.begin(), s.end()));

    // if(s.length() == 0)
    // {
    //     //cout<<answer<<"  ";
    //     if(checker(check, answer))
    //     	out.push_back(answer);
    //     return;
    // }
    // for(int i=0 ; i<s.length() ; i++)
    // {
    //     char ch = s[i];
    //     string left_substr = s.substr(0,i);
    //     string right_substr = s.substr(i+1);
    //     string rest = left_substr + right_substr;
    //     permute(rest , answer+ch);
    // }
 
}

string solve()
{
	string s;
	cin>>s;
	int n=s.length()-1;
	check=s;
	permute(s, "");
	if(out.size()==0)
		return "IMPOSSIBLE";
	return out[0];
	//string check=s;
	// for(int i=0;i<n;i++)
	// {
	// 	check=check.substr(1)+check[0];
	// 	cout<<check<<endl;
	// 	// if(checker(check, s))
	// 	// 	return check;
	// }

	//return ;
}
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int k=1;
	while(t--)
	{	
		out={};
		cout<<"Case #"<<k<<": ";
		cout<<solve();
		cout<<endl;
		k++;
	}
}