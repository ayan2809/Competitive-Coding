#include<bits/stdc++.h>
using namespace std;
int numZeroes[100001];
int numOnes[100001];

void populate(int N, string s)
{
  if (s[0] == '0')
  {
    numZeroes[0] = 1;
    numOnes[0] = 0;
  }
  else{
    numZeroes[0] = 0;
    numOnes[0] = 1;
  }
  for (int i = 1; i < N; i++)
  {
    if (s[i] == '0')
    {
      numZeroes[i] = numZeroes[i - 1] + 1;
      numOnes[i] = numOnes[i - 1];
    }
    else
    {
      numZeroes[i] = numZeroes[i - 1];
      numOnes[i] = numOnes[i - 1] + 1;
    }
  }
  
}

void findMin(int N, string s)
{
  int minTillNow = min(numZeroes[N - 1], numOnes[N - 2]);
  int numZeroesBefore, numOnesBefore, numZeroesAfter, numOnesAfter;
  int lengthOfNum, minDelete;
  for (int i = 1; i < N - 1; i ++)
  {
    numZeroesAfter = numZeroes[N - 1] - numZeroes[i];
    numOnesAfter = numOnes[N - 1] - numOnes[i];
    if (s[i] == '0')
    {
      numZeroesBefore = numZeroes[i] - 1;
      numOnesBefore = numOnes[i];
      lengthOfNum = numZeroesBefore + 1 + max(numZeroesAfter, numOnesAfter);
    }
    else
    {
      numZeroesBefore = numZeroes[i];
      numOnesBefore = numOnes[i] - 1;
      lengthOfNum = max(numZeroesBefore, numOnesBefore) + 1 + numOnesAfter;
    }
    minDelete = N - lengthOfNum;
    if (minDelete < minTillNow)
    {
      minTillNow = minDelete;
    }
  }
  cout << minTillNow << endl;
}

int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		string s;
		cin>>n>>s;
		populate(n, s);
    	findMin(n, s);
		
	}
}
