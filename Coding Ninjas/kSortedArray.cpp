#include<bits/stdc++.h>
using namespace std;

void kSortedArray(int input[], int n, int k)
{
	priority_queue<int> pq;
	for(int i=0;i<k;i++)
	{
		pq.push(input[i]);
	}

	int j=0;
	for(int i=k;i<n;i++)
	{
		input[j++]=pq.top();
		pq.pop();
		pq.push(input[i]);
	}
	for(int i=0;i<k;i++)
	{
		input[j++]=pq.top();
		pq.pop();
	}
	for(int i=0;i<n;i++)
	{
		cout<<input[i]<<" ";
	}
}
int main()
{
	int input[]={12,15,6,7,9};
	int n=5;
	int k=3;
	kSortedArray(input, n, k);
}