#include<bits/stdc++.h>
using namespace std;
int minCostPath_Mem(int **input, int m, int n, int i, int j, int **output)
{
	if(i==m-1 && j== n-1)
	{
		return input[i][j];
	}
	if(i>=m || j>=n)
	{
		return INT_MAX;
	}
	// check if the ans already exists or not
	if(output[i][j]!=-1)
	{
		return output[i][j];
	}



	int x= minCostPath_Mem(input,m, n, i, j+1, output);
	int y= minCostPath_Mem(input, m, n, i+1,j+1, output);
	int z= minCostPath_Mem(input, m, n, i+1,j, output);

	int ans= min(x, min(y, z))+input[i][j];
	
	// save the answer for future use
	output[i][j]=ans;
	return ans;
}
int minCostPath_Mem(int **input, int m, int n, int i, int j)
{
	int **output= new int*[m];
	for(int i=0;i<m;i++)
	{
		output[i]= new int[n];
		for(int j=0;j<n;j++)
		{
			output[i][j]= -1;
		}
	}
}
int main()
{

}