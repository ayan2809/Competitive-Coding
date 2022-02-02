#include<bits/stdc++.h>
using namespace std;
int first_index(int a[],int size,int x)
{
	if(size==-1 )
	{
		return -1;
	}
	if(a[0]==x)
	{
		return 0;
	}
	int ans = first_index(a+1,size-1,x); // this is the answer to find the index
	if(ans!=-1)			//check if this number is -1 or not
		return ans+1;	//this is the increment step to find the index
	return -1;

}
int main()
{
	int *a = new int[10];
	for(int i=0;i<10;i++)
	{
		a[i]=i+1;
	}
	cout<<first_index(a,10,14)<<endl;
}