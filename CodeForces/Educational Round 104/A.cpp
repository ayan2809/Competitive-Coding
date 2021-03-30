#include<bits/stdc++.h>
using namespace std;
//void check(vector<int> a)
//{
//	set <int> a;
//	
//}
int main()
{
	int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n;
        int array[n] ;
        for(int i=0 ; i<n ; i++)
        {
            cin >> array[i] ;
        }

        int min=array[0];
        for(int i=1; i<n ; i++)
        {
            if(array[i]<array[0])
            {
                min=array[i];
            }
        }
        

        int count=0;
        for(int i=0; i<n ; i++)
        {
            if(array[i]==min)
            {
                count++;
            }
        }

      cout << n-count << endl;


    }
}
