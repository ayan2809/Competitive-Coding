#include<bits/stdc++.h>
using namespace std;
//using std::erase;
int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
 
    // If element was found
    if (it != v.end())
    {
     
        // calculating the index
        // of K
        int index = it - v.begin();
        return index ;//<< endl;
    }
    else {
        // If the element is not
        // present in the vector
        return -1;// << endl;
    }
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,k1=0,k2=0;
		cin>>n>>k1>>k2;
		vector<int> a(k1);
		vector<int> b(k2);
		for(int i=0;i<k1;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<k2;i++)
		{
			cin>>b[i];
		}
		while(a.size()!=0 || b.size()!=0)
		{
			if(a.size()==0)
			{
				cout<<"NO"<<endl;
				break;
			}
			if(b.size()==0)
			{
				cout<<"YES"<<endl;
				break;
			}
			int sel1=*max_element(a.begin(),a.end());
			int sel2=*min_element(b.begin(),b.end());
			int index=0;
			if(sel1>sel2)
			{
				a.push_back(sel2);
				index=getIndex(b,sel2);
				b.erase(b.begin()+index);
			}
			else
			{
				b.push_back(sel1);
				index=getIndex(a,sel1);
				a.erase(a.begin()+index);
			}

		}
	}	
}