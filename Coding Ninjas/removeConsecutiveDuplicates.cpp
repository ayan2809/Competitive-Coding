#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char *input) {
	if(input[0]=='\0')
        return;
    if(input[0]==input[1])
    {
        int i=1;
        for(;input[i]!='\0';i++)
        {
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeConsecutiveDuplicates(input);
    }
    removeConsecutiveDuplicates(input+1);


}
int length(char s[]){
    if(s[0]=='\0')
    {
        return 0;
    }
    return length(s+1)+1;
}
int main(){
    char str[100];
    cin>>str;
    cout<<length(str)<<endl;
    removeConsecutiveDuplicates(str);
    int l= length(str);
    cout<<l<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c", str[i]);
    }
}