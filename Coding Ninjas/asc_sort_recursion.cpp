#include<bits/stdc++.h>
using namespace std;
bool asc_sorted(int a[],int size)
{
	if(size==0 || size==1)
		return true;
	if(a[0]>a[1])
		return false;
	bool ans= asc_sorted(a+1, size-1);
	return ans;
}
int main()
{
	int *a = new int[10];
	for(int i=0;i<10;i++)
	{
		a[i]=i+1;
	}
	cout<<asc_sorted(a,10)<<endl;
}