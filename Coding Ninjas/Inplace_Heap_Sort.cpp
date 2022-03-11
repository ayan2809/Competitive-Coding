#include<bits/stdc++.h>
using namespace std;
void inplaceHeapSort(int arr[], int n)
{
	for(int i=1;i<n;i++)
    {
    	int childIndex=i;
    	while(childIndex>0)
    	{
    		int parentIndex= (childIndex-1)/2;
    		if(arr[childIndex]<arr[parentIndex])
    		{
    			int temp=arr[childIndex];
    			arr[childIndex]=arr[parentIndex];
    			arr[parentIndex]=temp;
    		}
    		else
    		{
    			break;
    		}
    		childIndex=parentIndex;
    	}
    }


    // remove elements
    
    int size=n;

	while(size>1)
	{

	    int temp=arr[0];
	    arr[0]=arr[size-1];
	    arr[size-1]=temp;

	    size--;

	    
		int pi=0;
		int lci=(pi*2)+1;
		int rci=(pi*2)+2;


		while(lci<size)
		{
				
			int minIndex=pi;
			if(arr[minIndex]>arr[lci])
			{
				minIndex=lci;
			}
			if(rci<size && arr[rci]<arr[minIndex])
			{
				minIndex=rci;
			}
			if(minIndex==pi)
			{
				break;
			}
			int temp=arr[minIndex];
			arr[minIndex]=arr[pi];
			arr[pi]=temp;

			pi=minIndex;
			lci=(2*pi)+1;
			rci=2*pi+2;

		}

	}


}
int main()
{

	int input[]={6, 2, 1, 3, 7, 5};
	inplaceHeapSort(input, 6);
	for(auto it: input)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}