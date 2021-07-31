#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v,int temp)
{
	if(v.size()==0 || v[v.size()-1]<=temp)
	{
		v.push_back(temp);
		return;
	}
	int val=v[v.size()-1];
	v.pop_back();
	insert(v,temp);
	v.push_back(val);

}
void sort(vector <int> &v)
{
	if(v.size()==1)
		return;
	int temp=v[v.size()-1];
	v.pop_back();

	sort(v);

	insert(v,temp);
}
int main()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(7);
	v.push_back(6);
	v.push_back(4);
	v.push_back(5);
	v.push_back(9);
	sort(v);
	for(auto it: v)
		cout<<it<<" ";
}