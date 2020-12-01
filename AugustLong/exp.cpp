#include<bits/stdc++.h> 
using namespace std; 
  
// Recursive function to count 'n' digit numbers 
// with sum of digits as 'sum'. This function 
// considers leading 0's also as digits, that is 
// why not directly called 
unsigned long long int countRec(int n, int sum) 
{ 
    // Base case 
    if (n == 0) 
    return sum == 0; 
  
    if (sum == 0) 
    return 1; 
  
    // Initialize answer 
    unsigned long long int ans = 0; 
  
    // Traverse through every digit and count 
    // numbers beginning with it using recursion 
    for (int i=0; i<=9; i++) 
    if (sum-i >= 0) 
        ans += countRec(n-1, sum-i); 
  
    return ans; 
} 
  
// This is mainly a wrapper over countRec. It 
// explicitly handles leading digit and calls 
// countRec() for remaining digits. 
unsigned long long int finalCount(int n, int sum) 
{ 
    // Initialize final answer 
    unsigned long long int ans = 0; 
  
    // Traverse through every digit from 1 to 
    // 9 and count numbers beginning with it 
    for (int i = 1; i <= 9; i++) 
    if (sum-i >= 0) 
        ans += countRec(n-1, sum-i); 
  
    return ans; 
} 
// Driver program 
int main() 
{ 
	//int n = 4, sum = 28; 
	ios_base::sync_with_stdio(false); 
    	cin.tie(NULL); 
		long long int T,PC,PR;
		cin>>T;
		for(int i=0;i<T;i++)
		{
			cin>>PC>>PR;
			if(PC<10 && PR <10)
			cout<<"1 1"<<endl;
			else
			{
				int a=1,c=0,d=0;
				while(1!=0){
				c=countRec(a,PC);
				d=countRec(a,PR);
				if(c==0 && d!=0)
				{
				cout<<"1 "<<a<<endl;
				break;
				}
				else if(d==0 && c!=0)
				{
				cout<<"0 "<<a<<endl;
				break;
				}
				else if(d!=0 && c!=0)
				{
				cout<<"1 "<<a<<endl;
				break;
				}
				a+=1;
			 }	 
	}
}
	
	//return 0; 
	//cout << finalCount(n, sum); 
	return 0; 
} 

