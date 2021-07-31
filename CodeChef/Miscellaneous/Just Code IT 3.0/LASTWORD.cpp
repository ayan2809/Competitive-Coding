#include<bits/stdc++.h>
using namespace std;
#define OUT 0  
#define IN 1  

unsigned countWords(char *str)  
{  
    int state = OUT;  
    unsigned wc = 0; // word count  
  
    // Scan all characters one by one  
    while (*str)  
    {  
        // If next character is a separator, set the  
        // state as OUT  
        if (*str == ' ' || *str == '\n' || *str == '\t')  
            state = OUT;  
  
        // If next character is not a word separator and  
        // state is OUT, then set the state as IN and  
        // increment word count  
        else if (state == OUT)  
        {  
            state = IN;  
            ++wc;  
        }  
  
        // Move to next character  
        ++str;  
    }  
  
    return wc;  
}  
int main()
{
	char s[1000];
	gets(s);
	if(countWords(s)==1)
	cout<<strlen(s)<<endl;
	else
	{
		int count=0;
		for(int i=strlen(s)-1;i>=0;i--)
		{
			if(s[i]==' ')
			break;
			else
			count++;
			
		}
		cout<<count<<endl;
		
	}
	
}
