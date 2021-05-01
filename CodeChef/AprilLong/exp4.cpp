
//including heaader file
#include <bits/stdc++.h>
using namespace std;

//Function to convert a decimal mumber
//to its binary form
string decimalToBinary(int n)
{
	string s = bitset<64> (n).to_string();
	

	const auto loc1 = s.find('1');
	
	if(loc1 != string::npos)
		return s.substr(loc1);
	
	return "0";
}

//Driver Code
int main()
{
	int n = 17;
	
	for(int i=0;i<=17;i++)
	{
		cout << decimalToBinary(i)<<endl;
	}
	

	return 0;
}

