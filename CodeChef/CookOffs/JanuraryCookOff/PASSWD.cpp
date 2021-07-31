 
#include <bits/stdc++.h> 
using namespace std; 

void printStrongNess(string& input) 
{ 
	int n = input.length(); 

	// Checking lower alphabet in string 
	bool hasLower = false;
	bool  hasUpper = false, hasDigit = false; 
	bool specialChar = false; 
	string normalChars = "abcdefghijklmnopqrstu"
		"vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 "; 

	for (int i = 0; i < n; i++) { 
		if(input[i]>='a' && input[i]<='z') hasLower=true;
    if(i!=0 && i!=n-1){
      if(input[i]>='A' && input[i]<='Z') hasUpper=true;
      if(input[i]>='0' && input[i]<='9') hasDigit=true;
      if(input[i]=='@' || input[i]=='#' || input[i]=='%' || input[i]=='&' || input[i]=='?') specialChar=true;
    }
	} 

	// Strength of password 
	//cout << "Strength of password:-"; 
	if (hasLower && hasUpper && hasDigit && 
		specialChar && (n >= 10)) 
		cout << "YES" << endl; 
	 
	else
		cout << "NO" << endl; 
} 

// Driver code 
int main() 
{ 
	long long int t=0;
	cin>>t;
	while(t--)
	{
		
	
	string input = ""; 
	cin>>input;
	printStrongNess(input); 
}
	return 0; 
}

