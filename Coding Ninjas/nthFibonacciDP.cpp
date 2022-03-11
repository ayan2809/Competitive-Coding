#include<bits/stdc++.h>
using namespace std;
int fibo_helper(int n, int *ans)
{
	if(n<=1)
		return n;
	// check if output already exists
	if(ans[n]!=-1)
	{
		return ans[n];
	}
	int a= fibo_helper(n-1, ans);
	int b= fibo_helper(n-2, ans);

	ans[n] = a+b;
	// return the final output
	ans[n]=a+b;
}
int fibo_2(int n)
{
	int *ans= new int[n+1];
	for(int i-0;i<=n;i++)
	{
		ans[i]=-1;
	}
	return fibo_helper(n, ans);
}
int main()
{

}