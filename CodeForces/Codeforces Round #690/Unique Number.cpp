#include<bits/stdc++.h>
using namespace std;
int unique_digits( long long int n )
{
    const long long int Base = 10;

    int unique = 1;

    while ( unique && n )
    {
        long long int digit = n % Base;
        long long int tmp = n /= Base;

        while (tmp && digit != tmp % Base ) tmp /= Base;

        unique = tmp == 0;
    }

    return unique;
}
int getSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
 
// Function to find the smallest
// number whose sum of digits is also N
void smallestNumber(int N)
{
    int i = 1;
    while (1) {
        // Checking if number has
        // sum of digits = N
        if (getSum(i) == N) {
        	if(floor(log10(N) + 1)== floor(log10(i) + 1) && unique_digits( i )==1)
            {
            cout <<i<<endl;
            break;	
			}
			else
			{
				cout<<-1<<endl;
				break;
			}
			
        }
        i++;
    }
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		int m=floor(log10(n) + 1);
		smallestNumber(n);	
	}
}
