// A Dynamic Programming based C++ program to find minimum of coins
// to make a given change V
#include<bits/stdc++.h>
using namespace std;

// m is size of coins array (number of different coins)
int minCoins(int coins[], long long int m, long long int V)
{
	// table[i] will be storing the minimum number of coins
	// required for i value. So table[V] will have result
	long long int table[V+1];

	// Base case (If given value V is 0)
	table[0] = 0;

	// Initialize all table values as Infinite
	for (long long int i=1; i<=V; i++)
		table[i] = INT_MAX;

	// Compute minimum coins required for all
	// values from 1 to V
	for (long long int i=1; i<=V; i++)
	{
		// Go through all coins smaller than i
		for (long long int j=0; j<m; j++)
		if (coins[j] <= i)
		{
			long long int sub_res = table[i-coins[j]];
			if (sub_res != INT_MAX && sub_res + 1 < table[i])
				table[i] = sub_res + 1;
		}
	}
	return table[V];
}

// Driver program to test above function
int main()
{
	int coins[] = {1,5,10,20,100};
	long long int m = sizeof(coins)/sizeof(coins[0]);
	long long int V = 0;
	cin>>V;
	cout << minCoins(coins, m, V);
	return 0;
}

