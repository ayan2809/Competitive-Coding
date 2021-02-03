#include<bits/stdc++.h>
using namespace std;
int check(int arr[],int n)
{
	int a=0,result=1;
	for(int i=0;i<n;i++)
	{
		if(i>0 && arr[i]<=arr[i-1])
		a=i;
		
		result=max(result,i-a+1);
	}
	return result;
}
int main()
{
	int n=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<check(arr,n);
}
