#include<bits/stdc++.h>
using namespace std;

vector<int> getVoters(int arr[], int n)
{
	sort(arr, arr+n);
	vector<int> voters;
	for(int i=0;i<n;)
	{
		int count=0; 
		int j=i;
		while(j<n && (arr[j] == arr[i]))
		{
			count++;
			j++;
		}
		if(count>=2)
		{
			voters.push_back(arr[i]);
		}
		i=j;
	}
	return voters;
}
int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int total= n1+n2+n3;
	int arr[total];
	for(int i=0;i<total;i++)
	{
		cin>>arr[i];
	}
	vector<int> voters = getVoters(arr, total);
	cout<<voters.size()<<endl;
	for(auto it: voters)
	{
		cout<<it<<endl;
	}
}