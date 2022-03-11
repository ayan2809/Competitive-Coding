#include<bits/stdc++.h>
using namespace std;
void heapSort(int arr[], int n) 
{
    for(int i=0;i<n;i++)
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
    // remove elements or down heapify

    

    int minIndex=0;
	int pi=minIndex;
	int lci=pi*2+1;
	int rci=pi*2+2;
	int size=n;
	while(size>1)
	{

	    int temp=arr[0];
	    arr[0]=arr[n-1];
	    arr[n-1]=temp;

	    size--;


		while(pi<size)
		{
				
			lci=pi*2+1;
			rci=pi*2+2;
			if(lci>size)
			{
				break;
			}
				else if(rci>size && arr[lci]<arr[pi])
				{
					minIndex=lci;
				}
				else 
				{
					int mini=min(arr[pi],min(arr[lci], arr[rci]));
					if(mini==arr[pi])
					{
						break;
					}
					else if(mini==arr[lci])
					{
						minIndex=lci;
					}
					else if(mini==arr[rci])
					{
						minIndex=rci;
					}
				}
				
			int temp2=arr[minIndex];
			arr[minIndex]=arr[pi];
			arr[pi]=temp2;
	        pi=minIndex;
		}

	}

    
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

}