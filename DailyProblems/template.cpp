#include <iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main() {
    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0,n=0;
	cin>>t;
	while(t--)
	{
    	
	    int n=0,k=0; 
	    cin >>n>>k;

        // Input the array
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        
        
        
        if(*max_element(a.begin(), a.end())>k)
        cout<<-1<<endl;
        else
        {
            for (auto i = a.begin(); i != a.end(); ++i) 
            cout << *i << " ";
            cout<<endl;
            int id=0,trip=0;
            while(id<n)
            {
                trip++;
                int pickup=0;
                while((id<n) && (pickup<=k))
                {
                    pickup+=a[id];
                    id++;
                }
                cout<<pickup<<" ";
            }
            
            cout<<endl<<trip<<endl;
        }
	}
}

