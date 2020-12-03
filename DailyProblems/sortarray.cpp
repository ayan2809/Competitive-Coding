#include<iostream>
#include<stdio.h>
#include<vector.h>
#include<algorithm>
using namespace std;
void sort (vector <int> & v)
{
	if(v.size()==1)
	{
		return;
	}
	
	int temp=v[v.size()-1];
	v.pop_back();
	sort(v);
	insert(v,temp);
}
void insert(vector <int> & v, int temp)
{
	
}
int main()
{
	vector <int> v=[3,1,7,5,10,9];
	sort(v);
}
