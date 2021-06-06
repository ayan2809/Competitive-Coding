#include<bits/stdc++.h>
using namespace std;
int low=0,high=0;
int Binary_search(int a[],int key)
{
	cout<<low<<" "<<high<<endl;
	if(low<=high)
	{
		int mid=low+(high-low)/2;
		if(key==a[mid])
			return mid;
		else if(key<a[mid])
		{
			high=mid+1;
			return Binary_search(a,key);
		}
		else
		{
			low=mid-1;
			return Binary_search(a,key);
		}
	}
	return -1;

}
int main()
{
	int n=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	}
	int key=0;
	cin>>key;
	low=0;
	high=n;
	cout<<Binary_search(a,key);
}