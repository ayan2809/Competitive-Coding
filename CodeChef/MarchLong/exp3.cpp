#include <bits/stdc++.h> 
using namespace std; 

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

struct Point 
{ 
	int x; 
	int y; 
}; 

// Given three colinear points p, q, r, the function checks if 
// point q lies on line segment 'pr' 
bool onSegment(Point p, Point q, Point r) 
{ 
	if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && 
		q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y)) 
	return true; 

	return false; 
} 

// To find orientation of ordered triplet (p, q, r). 
// The function returns following values 
// 0 --> p, q and r are colinear 
// 1 --> Clockwise 
// 2 --> Counterclockwise 
int orientation(Point p, Point q, Point r) 
{ 
	// See https://www.geeksforgeeks.org/orientation-3-ordered-points/ 
	// for details of below formula. 
	int val = (q.y - p.y) * (r.x - q.x) - 
			(q.x - p.x) * (r.y - q.y); 

	if (val == 0) return 0; // colinear 

	return (val > 0)? 1: 2; // clock or counterclock wise 
} 

// The main function that returns true if line segment 'p1q1' 
// and 'p2q2' intersect. 
bool doIntersect(Point p1, Point q1, Point p2, Point q2) 
{ 
	// Find the four orientations needed for general and 
	// special cases 
	int o1 = orientation(p1, q1, p2); 
	int o2 = orientation(p1, q1, q2); 
	int o3 = orientation(p2, q2, p1); 
	int o4 = orientation(p2, q2, q1); 

	// General case 
	if (o1 != o2 && o3 != o4) 
		return true; 

	// Special Cases 
	// p1, q1 and p2 are colinear and p2 lies on segment p1q1 
	if (o1 == 0 && onSegment(p1, p2, q1)) return true; 

	// p1, q1 and q2 are colinear and q2 lies on segment p1q1 
	if (o2 == 0 && onSegment(p1, q2, q1)) return true; 

	// p2, q2 and p1 are colinear and p1 lies on segment p2q2 
	if (o3 == 0 && onSegment(p2, p1, q2)) return true; 

	// p2, q2 and q1 are colinear and q1 lies on segment p2q2 
	if (o4 == 0 && onSegment(p2, q1, q2)) return true; 

	return false; // Doesn't fall in any of the above cases 
} 

// Driver program to test above functions 
int main() 
{ 
//	struct Point p1 = {3, 5}, q1 = {7, 3}; 
//	struct Point p2 = {6, 4}, q2 = {6, 0}; 
//
//	doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n"; 
//	
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
//		vector <int> a(n);
//		vector <int> b(n);
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//			b[i]=a[i];
//		}
//		sort(b.begin(),b.end());
//		int m= b[n-1];
//		int k= getIndex(a,m);
//		vector <int> c(k);
//		vector <int> d(n-k-1);
//		//cout<<k<<" "<<n-k-1<<endl;
//		for(int i=0;i<k;i++)
//		{
//			c[i]=a[i];
//		}
//		sort(c.begin(),c.end());
//		for(int i=0;i<n-k-1;i++)
//		{
//			d[i]=a[i+k+1];
//			//cout<<endl<<d[i]<<" ";
//		}
//		sort(d.begin(),d.end());
//		int a1=0,a2=0;
//		if(c.size()!=0)
//		{
//			
//		a1=c[k-1];
//		
//		}
//		if(d.size()!=0)
//		a2=d[n-k-2];
//		if(a1==0)
//		{
//			cout<<getIndex(a,a2)-k<<endl;
//		}
//		else if(a2==0)
//		{
//			cout<<k-getIndex(a,a1)<<endl;
//		}
//		else
//		{
//			cout<<max(k-getIndex(a,a1),getIndex(a,a2)-k)<<endl;
//		}

		vector<pair<int, int>> p, s;
        for (int i = 0; i < n; i++)
		{
            int v;
            cin >> v;
            p.emplace_back(i + 1, v);
        }
        if (n == 2) 
		{
            cout << "1\n";
            continue;
        }
        s.push_back(p[0]);
        s.push_back(p[1]);
        
        int ans = 1;
		int len = s.size();
		
        for (int i = 2; i < n; i++)
		 {
            while (s.size() >= 2) 
			{
                double a1 = ((double) s[len - 1].second - (double) s[len - 2].second) /
                            ((double) s[len - 1].first - (double) s[len - 2].first);
                double a2 = ((double) p[i].second - (double) s[len - 1].second) /
                            ((double) p[i].first - (double) s[len - 1].first);
                if (a1 <= a2)
				 {
                    s.pop_back();
                    len--;
                } 
				else
                    break;
			}
			
			
            s.push_back(p[i]);
            len++;
            ans = max(ans, s[len - 1].first - s[len - 2].first);
        }
        cout << ans << endl;
		
	}

	return 0; 
} 

