// C++ programm to count total number
// of k x k sub matrix whose sum is
// greater than the given number S

#include <iostream>

using namespace std;

#define dim 5

// Function to create Prefix sum
// matrix from the given matrix
void createTable(int mtrx[][dim],
	int k, int p, int dp[][dim])
{
	// Store first value in table
	dp[0][0] = mtrx[0][0];
	
	// Initialize first row of matrix
	for (int j = 1; j < dim; j++) {
		dp[0][j] = mtrx[0][j] +
				dp[0][j - 1];
	}
	
	// Initialize first coloumn of matrix
	for (int i = 1; i < dim; i++) {
		dp[i][0] = mtrx[i][0] +
				dp[i - 1][0];
	}
	
	// Initialize rest table with sum
	for (int i = 1; i < dim; i++) {
		for (int j = 1; j < dim; j++) {
			dp[i][j] = mtrx[i][j] +
			dp[i - 1][j] + dp[i][j - 1] -
						dp[i - 1][j - 1];
		}
	}
}

// Utility Function to count the submatrix
// whose sum is greater than the S
int countSubMatrixUtil(int dp[][dim],
						int k, int p)
{
	int count = 0;
	int subMatSum = 0;
	
	// Loop to iterate over all the
	// possible positions of the
	// given matrix mat[][]
	for (int i = k - 1; i < dim; i++) {
		for (int j = k - 1; j < dim;
								j++) {
			if (i == (k - 1) || j == (k - 1)) {
				
				// Condition to check, if K x K
				// is first sub matrix
				if (i == (k - 1) && j == (k - 1)) {
					subMatSum = dp[i][j];
				}
				// Condition to check sub-matrix
				// has no margin at top
				else if (i == (k - 1)) {
					subMatSum = dp[i][j] - dp[i][j - k];
				}
				// Condition when sub matrix
				// has no margin at left
				else {
					subMatSum = dp[i][j] - dp[i - k][j];
				}
			}
			// Condtion when submatrix has
			// margin at top and left
			else {
				subMatSum = dp[i][j] - dp[i - k][j] -
					dp[i][j - k] + dp[i - k][j - k];
			}
			
			// Increament count, If sub matrix
			// sum is greater than S
			if (subMatSum >= p) {
				count++;
			}
		}
	}
	return count;
}
// Function to count submatrix of
// size k x k such that sum if
// greater than or equal to S
int countSubMatrix(int mtrx[][dim], int k, int p)
{
	int dp[dim][dim];
	
	// For loop to initialize prefix sum
	// matrix with zero, initially
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			dp[i][j] = 0;
		}
	}
	
	// Function to create the
	// prefix sum matrix
	createTable(mtrx, k, p, dp);
	return countSubMatrixUtil(dp, k, p);
}

// Driver Code
int main()
{
	int mtrx[dim][dim] = {
		{ 1, 7, 1, 1, 1 },
		{ 2, 2, 2, 2, 2 },
		{ 3, 9, 6, 7, 3 },
		{ 4, 3, 2, 4, 5 },
		{ 5, 1, 5, 3, 1 }
	};
	int k = 3;
	int p = 35;

	// Print total number of sub matrix
	cout << countSubMatrix(mtrx, k, p);

	return 0;
}
