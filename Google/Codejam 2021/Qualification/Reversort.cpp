#include<bits/stdc++.h>
using namespace std;
int index(vector <int> arr, int s, int e) {
    int i,mVal,mIdx;
    mVal = INT_MAX, mIdx = 0;
    for(i=s;i<=e;i++) {
        if(arr[i] < mVal){
            mVal = arr[i];
            mIdx = i;
        }
    }
    return mIdx;
}
int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
 
    // If element was found
    if (it != v.end())
    {
     
        // calculating the index
        // of K
        int index = it - v.begin();
        return index;// << endl;
    }
    else {
        // If the element is not
        // present in the vector
        return -1;// << endl;
    }
}
int solve(vector <int> a,int n)
{
	int sum=0,j=0;
	for(int i=0;i<n;i++)
	{
		// int ele=*min_element(a.begin()+i,a.end());
		// int j=getIndex(a,ele);
		j=index(a,i,n);
		sum+=j-i+1;
		//cout<<sum<<" ";
		int first=i;
		int last=j;
		for(int m=i;m<(int)(j-i)/2;m++)
		{
			int temp=a[first];
			a[first]=a[last];
			a[last]=temp;

			first++;
			last--;
		}
		
	}
	//cout<<endl;
	return sum;
}
int main()
{
	int t=0;
	cin>>t;
	int count=1;
	while(t--)
	{
		int n=0;
		cin>>n;
		vector <int> a(n);
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<"Case #"<<count++<<": "<<solve(a,n-1)<<endl;
		//cout<<sum<<endl;
	}
	
}