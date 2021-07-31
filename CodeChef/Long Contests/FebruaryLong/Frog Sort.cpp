#include<bits/stdc++.h>
using namespace std;
//template<typename T>
//bool isEqual(std::vector<T> const &v1, std::vector<T> const &v2)
//{
//	auto pair = std::mismatch(v1.begin(), v1.end(), v2.begin());
//	return (pair.first == v1.end() && pair.second == v2.end());
//}
//
//void solve(int n,vector<int> a,vector<int> b,vector<int> c)
//{
//	if(isEqual(a,c))
//	cout<<"Both are equal"<<endl;
//	else
//	cout<<"Both the vectors are not equal"<<endl;
//}
int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
 
    // If element was found
    if (it != v.end()) 
    {
     
        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
//    else {
//        // If the element is not
//        // present in the vector
//        cout << "-1" << endl;
//    }
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		vector<int> a(n);
		vector<int> b(n);
		vector<int> c(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			c[i]=i;
		}
		for(int i=0;i<n;i++)
		cin>>b[i];
//		vector<int>d(n);
		for(int i=1;i<=n;i++)
		{
			c[i]=getIndex(a,i);
		}
		int count=0;
		int temp1=0,temp2=0,temp=0;
		for(int i=2;i<=n;i++)
		{
			 temp1=c[i];
			 temp2=c[i-1];
			 temp=0;
			if(temp1<=temp2)
			{
				temp=ceil(double((double(temp2)+1-double(temp1))/double(b[temp1])));
			}
			count+=temp;
			//cout<<temp<<endl;
			c[i]+=temp*(b[temp1]);
		}
		cout<<count<<endl;
//		sort(c.begin(),c.end());
//		solve(n,a,b,c);	
	}
}
