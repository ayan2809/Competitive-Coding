// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
void find_string(string s,int n)
{
	string final;
	int i=0;
	while(i!=n)
	{
		char ch='a';
		if(i%2==0)
		{
			if(s[i]==ch)
			ch=ch+1;
			final+=ch;	
		}
		else
		{
			char ch='z';
			if(s[i]==ch)
			ch=ch-1;
			final+=ch;
		}
		i=i+1;
	}
	cout<<final<<endl;
	
}

// Function to find the winner of the game 
void find_winner(string str, int n) 
{ 

	// To store the strings for both the players 
	string str1 = "", str2 = ""; 
	for (int i = 0; i < n; i++) { 

		// If the index is even 
		if (i % 2 == 0) { 

			// Append the current character 
			// to player A's string 
			str1 += str[i]; 
		} 

		// If the index is odd 
		else { 

			// Append the current character 
			// to player B's string 
			str2 += str[i]; 
		} 
	} 

	// Sort both the strings to get 
	// the lexicographically smallest 
	// string possible 
	sort(str1.begin(), str1.end()); 
	sort(str2.begin(), str2.end()); 

	// Copmpare both the strings to 
	// find the winner of the game 
	if (str1 < str2) 
		cout << "A"; 
	else if (str2 < str1) 
		cout << "B"; 
	else
		cout << "Tie"; 
} 

// Driver code 
int main() 
{ 
	 int t=0;
	 cin>>t;
	 while(t--)
	 {
	 	string s;
	 	cin>>s;
	 	int n = s.length(); 
		find_string(s,n);
		//find_winner(s, n); 
	 }
	
	

	return 0; 
} 

