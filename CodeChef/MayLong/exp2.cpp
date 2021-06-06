// C++ Program to find the minimum of maximum
// differerence between adjacent elements
// after at most K insertions

#include <bits/stdc++.h>
using namespace std;

int minMaxDiff(int arr[], int n, int k)
{
  int max_adj_dif = INT_MIN;
  // Calculate the maximum
  // adjacent difference
  for (int i = 0; i < n - 1; i++)
    max_adj_dif
      = max(max_adj_dif,
        abs(arr[i] - arr[i + 1]));

  // If the maximum adjacent
  // difference is already zero
  if (max_adj_dif == 0)
    return 0;

  // best and worst specifies
  // range of the maximum
  // adjacent difference
  int best = 1;
  int worst = max_adj_dif;
  int mid, required;

  while (best < worst) {

    mid = (best + worst) / 2;

    // To store the no of insertions
    // required for respective
    // values of mid
    required = 0;

    for (int i = 0; i < n - 1; i++) {

      required += (abs(arr[i]
              - arr[i + 1])
            - 1)
            / mid;
    }


    // If the number of insertions
    // required exceeds K
    if (required > k)
      best = mid + 1;

    // Otherwise
    else
      worst = mid;

     cout<<worst<<" "<<best<<" "<<required<<endl;
  }

  return worst;
}

// Driver code
int main()
{
  int arr[] = { 3, 12, 25, 50 };
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 7;

  cout << minMaxDiff(arr, n, k);
  return 0;
}
