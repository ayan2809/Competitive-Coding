#include<stdio.h>
#include<iostream>
using namespace std;
void Insert(int A[],int n)
{
	int i=n,temp;
	temp=A[i];

	while(i>1 && temp>A[i/2])
	{
		A[i]=A[i/2];
		i/=2;
	}
	A[i]=temp;
}
int Display(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
int Delete(int A[],int n)
{
	int i=0,j=0,x=0,temp,val=A[1];
	x=A[n];
	A[1]=A[n];
	A[n]=val;
	i=1;
	j=i*2;
	while(j<n-1)
	{
		if(A[j+1]>A[j])
		{
			j=j+1;
		}
		if(A[i]<A[j])
		{
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
			i=j;
			j=2*j;
		}
		else
			break;
	}
	return val;
}
int main()
{
	int H[]={0,10,20,30,25,5,40,35};
	Insert(H,2);
	Insert(H,3);
	Insert(H,4);
	Insert(H,5);
	Insert(H,6);
	Insert(H,7);
	
	Display(H,sizeof(H) / sizeof(H[0]));
	cout<<"Deleted Element is :"<<Delete(H,7)<<endl;
	// to delete all the elements in the heap
	for(int i=6;i>1;i--)
	{
		cout<<"Deleted Element is :"<<Delete(H,i)<<endl;
	}
	Display(H,sizeof(H) / sizeof(H[0]));
	return 0;
}