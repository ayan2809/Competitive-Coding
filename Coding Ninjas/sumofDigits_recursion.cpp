#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n) {
    // Write your code here
    if(n==0)
        return 0;
    return n%10+sumOfDigits((int)n/10);

}


int main()
{
    cout<<sumOfDigits(157)<<endl;
}