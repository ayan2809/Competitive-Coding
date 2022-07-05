#include<bits/stdc++.h>
using namespace std;
class Edge{
public:
	int source;
	int dest;
	int weight;
};
bool compare(Edge e1, Edge e2)
{
	return e1.weight<e2.weight;
}
int findParent(int v, int *parent)
{
	if(parent[v]==v)
		return v;
	return findParent(parent[v], parent);
}
void kruskals(Edge *input, int n, int e)
{
	// sort the input array
	// in ascending order
	sort(input, input+e, compare);

	Edge *output= new Edge[n-1];
	
	// to store every vertex ka parent
	int *parent = new int[n];

	for(int i=0;i<n;i++)
	{
		parent[i]=i;
		// coz every vertex is parent 
		// of itself
	}

	int count=0;
	int i=0;
	while(count!=n-1)
	{
		// take currentEdge 
		// ie the smallest weight edge
		Edge currentEdge= input[i];
		// check if we can add the edge to mst or not
		// function to find the parent
		int sourceParent= findParent(currentEdge.source, parent);
		int destParent= findParent(currentEdge.dest, parent);
		if(sourceParent!=destParent)
		{
			output[count]= currentEdge;
			count++;
			parent[sourceParent]=destParent;
		}
		i++;
	}

	// printing the MST
	for(int i=0;i<n-1;i++)
	{
		if(output[i].source<output[i].dest)
		{
			cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
		}
		else
		{
			cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
		}
		
	}

}
int main()
{
	int n=0,e=0;
	cin>>n>>e;
	// input of source destination and weight
	// take input
	// sort the array in increasing order
	Edge *input= new Edge[e];
	for(int i=0;i<e;i++)
	{
		int s,d, w;
		cin>>s>>d>>w;
		input[i].source= s;
		input[i].dest= d;
		input[i].weight= w;
	}

	kruskals(input, n, e);
}