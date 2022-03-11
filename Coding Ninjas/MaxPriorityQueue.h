#include <bits/stdc++.h>
using namespace std;

class PriorityQueue {
    // Declare the data members here
    vector<int> pq;

   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        pq.push_back(element);
		int childIndex= pq.size()-1;
		
		while(childIndex>0)
		{
			int parentIndex= (childIndex-1)/2;
			if(pq[childIndex]> pq[parentIndex])
			{
				int temp= pq[childIndex];
				pq[childIndex]=pq[parentIndex];
				pq[parentIndex]=temp;
			}
			else{
				break;
			}
			childIndex= parentIndex;
		}
        // Implement the insert() function here
    }

    int getMax() {
        // Implement the getMax() function here
        if(pq.size()<=0)
            return 0;

        return pq[0];
    }

    int removeMax() {
        
        if(isEmpty())
			return -1;
		
		int ans=pq[0];
		pq[0]=pq[pq.size()-1];

		pq.pop_back();

		
		int minIndex=0;

		int pi=minIndex;
		int lci=pi*2+1;
		int rci=pi*2+2;
		
		while(pi<pq.size())
		{
			
			lci=pi*2+1;
			rci=pi*2+2;
			if(lci>pq.size())
			{
				break;
			}
			else if(rci>pq.size() && pq[lci]>pq[pi])
			{
				minIndex=lci;
			}
			else {
				int maxi=max(pq[pi],max(pq[lci], pq[rci]));
				if(maxi==pq[pi])
				{
					break;
				}
				else if(maxi==pq[lci]){
					minIndex=lci;
				}
				else if(maxi==pq[rci])
				{
					minIndex=rci;
				}
			}
			
			int temp2=pq[minIndex];
			pq[minIndex]=pq[pi];
			pq[pi]=temp2;
            pi=minIndex;
		}
        
		

		return ans;
    }

    int getSize() {
        return pq.size();
        // Implement the getSize() function here
    }

    bool isEmpty() {
        return pq.size()==0;
        // Implement the isEmpty() function here
    }
};