// C++ Implementation to find the
// XOR of the two Binary Strings
#include<bits/stdc++.h>
using namespace std;

// Function to find the
// XOR of the two Binary Strings
string xoring(string a, string b, int n){
string ans = "";
	
	// Loop to iterate over the
	// Binary Strings
	for (int i = 0; i < n; i++)
	{
		// If the Character matches
		if (a[i] == b[i])
			ans += "0";
		else
			ans += "1";
	}
	return ans;
}

// Driver Code
int main()
{
	string a = "000111";
	string b = "110100";
	int n = a.length();
	string c = xoring(a, b, n);
	cout << c << endl;
}

// This code is contributed by Surendra_Gangwar
