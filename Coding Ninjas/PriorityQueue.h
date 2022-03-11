#include<bits/stdc++.h>
using namespace std;
// minimum Priority Queue
class PriorityQueue
{
	vector<int> pq;

public:
	PriorityQueue(){

	}

	bool isEmpty(){
		return pq.size()==0;
	}

	int getSize()
	{
		return pq.size();
	}

	int getMin()
	{
		// first check if the pq is empty or not
		if(isEmpty())
			return 0;
		return pq[0];
	}

	void insert(int element)
	{	

		pq.push_back(element);
		int childIndex= pq.size()-1;
		
		while(childIndex>0)
		{
			int parentIndex= (childIndex-1)/2;
			if(pq[childIndex]< pq[parentIndex])
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

	}

	int removeMin() 
	{
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
			else if(rci>pq.size() && pq[lci]<pq[pi])
			{
				minIndex=lci;
			}
			else {
				int mini=min(pq[pi],min(pq[lci], pq[rci]));
				if(mini==pq[pi])
				{
					break;
				}
				else if(mini==pq[lci]){
					minIndex=lci;
				}
				else if(mini==pq[rci])
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



};