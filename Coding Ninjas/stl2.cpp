#include<bits/stdc++.h>
using namespace std;

struct Interval{
	int st;
	int et;
};
bool compare(Interval i1, Interval i2)
{
	return i1.st>i2.st;
}
int main()
{
	// pair<int, char> p;
	// p= make_pair(2,'b');
	// pair<int, char> p2(1,'a');
	// cout<<p.first<<" "<<p.second<<endl;
	// cout<<p2.first<<" "<<p2.second<<endl;
	// set only has unique values
	// set

	// set<int> s;
	// int arr[]= {1,2,3,4,5,6,7};
	// for(int i=0;i<7;i++)
	// {
	// 	s.insert(arr[i]);
	// }
	// set<int> ::iterator it;
	// for(it=s.begin();it!=s.end();it++)
	// {
	// 	cout<<*it<<endl;
	// }
	// Interval arr[] = {{6,4},{3,4},{4,6},{8,13}};
	// sort(arr, arr+4,compare);
	// for(auto it: arr)
	// {
	// 	cout<<it.st<<":"<<it.et<<endl;
	// }

	// int binary[]={1,6,7,8,23,35};
	// cout<<binary_search(binary, binary+6,2)<<endl;

	// cout<<__gcd(10,6)<<endl;
	// int x=1,y=10;
	// swap(x,y);
	// cout<<x<<" "<<y<<endl;
	
}