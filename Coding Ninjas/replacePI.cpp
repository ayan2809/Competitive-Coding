#include <bits/stdc++.h>
using namespace std;
void solve(char input[], int len, string *s)
{
    if(len<0)
        return;
    if(input[len]=='i' && input[len-1]=='p')
    {
        *s+="41.3";
        len-=2;
    }
    else
    {
        *s+=input[len];
        len-=1;
    }
    solve(input, len,s);
 
}
void replacePi(char input[]) 
{
    int len=strlen(input);
    string s="";
    int a=0;
    solve(input, len, &s);
    for(int i=s.length()-1;i>=0;i--)
    {
        input[a++]=s[i];
    }
}
int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
