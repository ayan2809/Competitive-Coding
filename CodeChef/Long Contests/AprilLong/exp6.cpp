#include <bits/stdc++.h>
using namespace std;


void MexStr(string S)
{
    
    std::queue<string> bin_q;
    std::unordered_map<string, int> store;
    string temp1, temp2, temp3;
    long long int n = S.length();
        

    long long int pos0[(int)1e6], pos1[(int)1e6], i, j, k;
    

    k = -1;
    for(i = 0; i < n; ++i)
    {
        if(S[i] == '0')
        {
            for(j = k+1; j <= i; j++)
            {
                pos0[j] = i;
            }
            k = i;
        }
    }

    for(i = k+1; i <= n; ++i)
    {
        pos0[i] = n;
    }

    if(pos0[0] == n)
    {
        cout << "0" << endl;
        return;
    }

    k = -1;
    for(i = 0; i < n; ++i)
    {
        if(S[i] == '1')
        {
            for(j = k+1; j <= i; j++)
            {
                pos1[j] = i;
            }
            k = i;
        }
    }

    for(i = k+1; i <= n; ++i)
    {
        pos1[i] = n;
    }

    bin_q.push("10");
    bin_q.push("11");


    i = S.find("1");
    if(i == -1)
    {
        cout << "1\n" ;
        return;
    }
    store["1"] = i;

    while (true)
    {
        temp2 = bin_q.front();
        temp3 = temp2.substr(0, temp2.length() - 1);
        if (store.at(temp3) >= 0)
        {
            if(temp2.back() == '0')
            {
                if(pos0[store.at(temp3)+1] < n)
                {
                    store[temp2] = pos0[store.at(temp3)+1];
                }
                else
                {
                    cout << temp2 << endl;
                    return;
                }
            }

            if(temp2.back() == '1')
            {
                if(pos1[store.at(temp3)+1] < n)
                {
                    store[temp2] = pos1[store.at(temp3)+1];
                }
                else
                {
                    cout << temp2 << endl;
                    return;
                }
            }
        }

        bin_q.pop();
        bin_q.push(temp2 + "0");
        bin_q.push(temp2 + "1");
    }
}

int main()
{
    long long int test;
    string S;
    cin >> test;
    while (test--)
    {
        cin >> S;
        MexStr(S);
    }
   
    return 0;
}