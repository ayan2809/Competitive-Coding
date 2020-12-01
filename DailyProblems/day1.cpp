/*
This problem was asked by Google.

Given a set of distinct positive integers, find the largest subset such that every pair of elements in the subset (i, j) satisfies either i % j = 0 or j % i = 0.

For example, given the set [3, 5, 10, 20, 21], you should return [5, 10, 20]. Given [1, 3, 6, 24], return [1, 3, 6, 24].
*/


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cout<<a[i]<<",";
	
}
