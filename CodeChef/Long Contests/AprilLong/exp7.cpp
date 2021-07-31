#include <bits/stdc++.h>
using namespace std;
#define ll long long

string int_to_bin(ll i)
{
    string str="";
    while(i>=2)
    {
        if(i%2)
        str=str+'1';
        else str=str+'0';
        i=i/2;
    }
    if(i%2)
    str=str+'1';
    else str=str+'0';
    reverse(str.begin(),str.end());
    return str;
}


bool finder(int i, string sa){
        string is = int_to_bin(i);
        int sp = 0;
        for(int j =0; j<is.length(); j++){

            if(sp<sa.size()){
                //int p = sa.subList(sp,sa.size()).indexOf(String.valueOf(is.charAt(j)));
                int p = (sa.substr(sp,sa.size())).find(is[j]);
                if(p==-1) return false;
                sp = sp+p+1;
            }
            else{
                return false;
            }

        }
        return true;

    }

int main()
{
   ll t;
    string s;
    cin >> t;
    while (t--)
    {
        int answer=0,i=0;
        cin >> s;
        while(true)
        {
            if(!finder(i,s)){
                answer=i;
                break;
            }
            i++;
        }
        cout<<int_to_bin(answer)<<endl;
    }
   
    return 0;
}
