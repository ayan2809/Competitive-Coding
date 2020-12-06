#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,k=0;
    cin>>n;
    string s;
    cin>>s;
    cin>>k;
    k=k%26;
    string alpha="abcdefghijklmnopqrstuvwxyz";
    string alpha1="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //transform(s.begin(), s.end(), s.begin(), ::tolower); 
    
    string alpha2 = alpha.substr(k,alpha.length())+alpha.substr(0,k);
    string alpha3 = alpha1.substr(k,alpha1.length())+alpha1.substr(0,k);
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i])){
            if(isupper(s[i]))
            {
               cout<<alpha3[alpha1.find(s[i])]; 
            }
            else {
            cout<<alpha2[alpha.find(s[i])];
            }
        
        } 
        else {
        cout<<s[i];
        }
           
        
    }
}
