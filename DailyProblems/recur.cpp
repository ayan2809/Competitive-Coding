#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void insert(vector <int> &a,int temp)
{
	if(a.size()==0 || a[a.size()-1]<=temp)
	{
		a.push_back(temp);
		return ;
	}
	int val=a[a.size()-1];
	a.pop_back();
	insert(a,temp);
	a.push_back(val);
	
	return ;
}
void sorty(vector <int> &a)
{
	if(a.size()==1)
	return;
	int temp=a[a.size()-1];
	a.pop_back();
	sorty(a);
	insert(a,temp);

	
}
int main()
{
	int n=0;
	cout<<"Enter the length of the vector :";
	cin>>n;
	vector <int> a(n);
	cout<<"Enter the vector elements "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sorty(a);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		
	}
}
