#include<stdio.h>
#include<stdlib.h>

int countOccurrences(int arr[], int n, int x) 
{ 
    int res = 0; 
    for (int i=0; i<n; i++) 
        if (x == arr[i]) 
          res++; 
    return res; 
}

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr2[], int n,int arr[]) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr2[j] > arr2[j+1]) 
           {
           	swap(&arr[j], &arr[j+1]); 
           	swap(&arr2[j], &arr2[j+1]); 
           	
		   }
              
}


int number(int n)
{
	int sum=0;
	while(n!=0)
	{
		int d=n%10;
		sum+=d;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int arr[n];
	int i=0;
	int m=n;
	while(n--)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	//printf("%d\n",i);
	
	int arr2[m];
	int sum1=0;
	for(int i=0;i<m;i++)
	{
		int d=number(arr[i]);
		arr2[i]=d;
		sum1=sum1+(d*(i+1));
//		printf("%d\n",sum1);
	//	printf("%d %d ",arr[i],arr2[i]);	
	}
	printf("\n%d\n",sum1);
	
	bubbleSort(arr2, m,arr);
	int sum2=0;
	for(int i=0;i<m;i++)
	{
		//int d=number(arr[i]);
		//arr2[i]=d;
		sum2=sum2+(arr2[i]*(i+1));
	//	printf("%d\n",sum1);
		//printf("%d %d ",arr[i],arr2[i]);	
	}
	
	for(int i=0;i<m-1;i++)
	{
		
		if(arr2[i]==arr2[i+1] && arr[i]>arr[i+1])
		{
			swap(&arr[i], &arr[i+1]);
			swap(&arr2[i],&arr2[i+1]);
		}
		
	}
	for(int i=0;i<m;i++)
	{
		
		printf("%d ",arr[i]);	
	}
	printf("\n");
	for(int i=0;i<m-1;i++)
	{
		
		if(arr2[i]==arr2[i+1] )
		{
			swap(&arr[i], &arr[i+1]);
			swap(&arr2[i],&arr2[i+1]);
		}
		
	}
	for(int i=0;i<m;i++)
	{
		
		printf("%d ",arr[i]);	
	}
	
	
	
	printf("\n%d\n",sum2);
	
	
}
