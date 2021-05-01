#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxi 80000


bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0; 
 
    
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
 
    
    return (j == m);
}

// Driver program to test methods of graph class
int main()
{
	string str1 = "1100";
	string str2 = "1001011";
	int m = str1.size();
	int n = str2.size();
	isSubSequence(str1, str2, m, n) ? cout << "Yes "
									: cout << "No";
	return 0;
}
