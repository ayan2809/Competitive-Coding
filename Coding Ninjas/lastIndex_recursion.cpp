#include<bits/stdc++.h>
using namespace std;
int last_index(int a[],int size,int x)
{
	if(size==-1 )
	{
		return -1;
	}
	if(a[size-1]==x)
	{
		return size-1;		
	}
	return last_index(a,size-1,x); 


}
int main()
{
	int *a = new int[10];
	for(int i=0;i<10;i++)
	{
		a[i]=i+1;
	}
	cout<<last_index(a,10,4)<<endl;
}