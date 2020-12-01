#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define MAX 100


int main()
{
	 char b[100],c[100]; 
	float a;
	printf("Enter the number: %");
	scanf("%f",&a);
	char buf[MAX]; 
  	sprintf(buf, "%f", a);
  	printf("You have entered: %s", buf);
    //gcvt(a, 100, buf); 
    int len=strlen(buf)-1;
    
    int f=0;
    for(int i=len;i>=0;i--)
    {
    	if(buf[i]=='.'){
    	
    	f=i;
    	break;
		}
    }
    int k=0;
    for(int i=f-1;i>=0;i--)
    {
    	b[k]=buf[i];
    	k++;
    	//printf("%c ",buf[i]);
	}
	b[k++]='.';
	for(int i=strlen(buf)-1;i>=f+1;i--)
	{
		b[k]=buf[i];
    	k++;
    	//printf("%c ",buf[i]);
	}
    //printf("\nEnter the number: %d\n",len);
    
    printf("the new number %s",b);
//    const char s[2] = "-";   
//    char *token;
//    double x;
//   /* get the first token */ 
//   token = strtok(b, s);
//    sscanf(token,"%f",&x);
//    printf("The float number is %f",x);
	
	
		
	
}
