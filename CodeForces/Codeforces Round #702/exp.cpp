#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int k=69;
	int i=3;
	auto it=a.insert(a.begin() + i, k);
	
	cout << "The vector elements are: "; 
    for (auto it = a.begin(); it != a.end(); ++it) 
        cout << *it << " "; 
}
