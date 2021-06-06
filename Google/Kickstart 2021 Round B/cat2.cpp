// CPP program to merge two unsorted lists
// in sorted order
#include <bits/stdc++.h>
using namespace std;

// Function to merge array in sorted order
void sortedMerge(int a[], int b[], int c[], int res[],
								int n, int m,int o)
{
	// Sorting a[] and b[]
	sort(a, a + n);
	sort(b, b + m);
	sort(c, c + o);
	// Merge two sorted arrays into res[]
	int i = 0, j = 0,l=0, k = 0;
	while (i < n && j < m && l< o) {
		if (a[i] <= b[j] && a[i]<=c[l]) {
			res[k] = a[i];
			i += 1;
			k += 1;
		} 
		else if((b[j] <= a[i] && b[j]<=c[l]))
		{
			res[k] = b[j];
			j += 1;
			k += 1;
		}
		else {
			res[k] = c[l];
			l += 1;
			k += 1;
		}
	}
	while (i < n) { // Merging remaining
					// elements of a[] (if any)
		res[k] = a[i];
		i += 1;
		k += 1;
	}
	while (j < m) { // Merging remaining
					// elements of b[] (if any)
		res[k] = b[j];
		j += 1;
		k += 1;
	}
	while(l<o)
	{
		res[k] = c[l];
		l += 1;
		k += 1;
	}
}

// Driver code
int main()
{
	int a[] = { 123, 678, 345, 225, 890, 345, 111};
	int b[] = { 345, 123, 654, 789, 912, 144,267, 909, 111, 324 };
	int c[] ={ 567, 222, 111, 900, 545, 897};
	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(b) / sizeof(b[0]);
	int o=sizeof(c) / sizeof(c[0]);

	// Final merge list
	int res[n + m+o];

	sortedMerge(a, b,c, res, n, m,o);

	cout << "Sorted merge list :";
	for (int i = 0; i < n + m+o; i++)
		cout << " " << res[i];
	//cout << "n";

	return 0;
}
