#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  

	int n;
    cin>>n;
    
    short int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    
    //Declaring Array to store indexes of Next Greater and Next Smaller number
    short int next_greater[n], next_smaller[n];
    
    //Declaring Stack which also stores indexes to find greater Element
    stack<short int> s1;
 	for (short int i=n-1; i>=0; i--)
    {
        // Keep removing top element from S while the top
        // element is smaller then or equal to a[i] 
		while (!s1.empty() && a[s1.top()] <= a[i] )
            s1.pop();
 
        // store the index of next greater element of current element
        if (!s1.empty())
            next_greater[i] = s1.top();
 
        // If all elements in S were smaller than a[i] 
		//then stack will become empty, so store -1
        else
            next_greater[i] = -1;
 
        // Push this element
        s1.push(i);
    }
    
    //Declaring Stack which also stores indexes to find greater Element
    stack<short int> s2;
 	for (short int i=n-1; i>=0; i--)
    {
        // Keep removing top element from S while the top
        // element is greater then or equal to a[i]
        while (!s2.empty() && a[s2.top()] >= a[i])
            s2.pop();
 
        // store the index of next smaller element of current element
		if (!s2.empty())
            next_smaller[i] = s2.top();
 
        // If all elements in S were smaller than a[i] 
		// then stack will become empty, so store -1
		else
            next_smaller[i] = -1;
 
        // Push this element
        s2.push(i);
    }
    
    
    for (short int i=0; i< n; i++)
    {
    	// if both Greater and Smaller Element exist, than print output
    	// else print -1
	    if (next_greater[i] != -1 && next_smaller[next_greater[i]] != -1)
            cout << a[next_smaller[next_greater[i]]] <<" ";
		else
            cout<<-1<<" ";
    }
  
    return 0;
}