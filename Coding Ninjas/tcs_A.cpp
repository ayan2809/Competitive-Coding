#include <bits/stdc++.h>
#define infi 1000000000
using namespace std;

// Class of the node
class Node {
public:
	int vertexNumber;

	// Adjacency list that shows the
	// vertexNumber of child vertex
	// and the weight of the edge
	vector<pair<int, int> > children;
	Node(int vertexNumber)
	{
		this->vertexNumber = vertexNumber;
	}

	// Function to add the child for
	// the given node
	void add_child(int vNumber, int length)
	{
		pair<int, int> p;
		p.first = vNumber;
		p.second = length;
		children.push_back(p);
	}
};

// Function to find the distance of
// the node from the given source
// vertex to the destination vertex
vector<int> dijkstraDist(
	vector<Node*> g,
	int s, vector<int>& path)
{
	// Stores distance of each
	// vertex from source vertex
	vector<int> dist(g.size());

	// Boolean array that shows
	// whether the vertex 'i'
	// is visited or not
	bool visited[g.size()];
	for (int i = 0; i < g.size(); i++) {
		visited[i] = false;
		path[i] = -1;
		dist[i] = infi;
	}
	dist[s] = 0;
	path[s] = -1;
	int current = s;

	// Set of vertices that has
	// a parent (one or more)
	// marked as visited
	unordered_set<int> sett;
	while (true) {

		// Mark current as visited
		visited[current] = true;
		for (int i = 0;
			i < g[current]->children.size();
			i++) {
			int v = g[current]->children[i].first;
			if (visited[v])
				continue;

			// Inserting into the
			// visited vertex
			sett.insert(v);
			int alt
				= dist[current]
				+ g[current]->children[i].second;

			// Condition to check the distance
			// is correct and update it
			// if it is minimum from the previous
			// computed distance
			if (alt < dist[v]) {
				dist[v] = alt;
				path[v] = current;
			}
		}
		sett.erase(current);
		if (sett.empty())
			break;

		// The new current
		int minDist = infi;
		int index = 0;

		// Loop to update the distance
		// of the vertices of the graph
		for (int a: sett) {
			if (dist[a] < minDist) {
				minDist = dist[a];
				index = a;
			}
		}
		current = index;
	}
	return dist;
}

// Function to print the path
// from the source vertex to
// the destination vertex
void printPath(vector<int> path,
			int i, int s)
{
	if (i != s) {

		// Condition to check if
		// there is no path between
		// the vertices
		if (path[i] == -1) {
			cout << -1;
			return;
		}
		printPath(path, path[i], s);
		cout << path[i] << " ";
	}
}

// Driver Code
int main()
{

	int  n=5;
	cin>>n;
	int f=n;
	vector<Node*> v;
	int s = 1, e = 2;

	// Loop to create the nodes
	for (int i = 0; i < n; i++) {
		Node* a = new Node(i);
		v.push_back(a);
	}


	vector<vector<int>> num;
	while(f--)
	{
		std::string line;
		while (std::getline(std::cin, line)) 
		{
		    std::istringstream ss(line);
		    num.emplace_back(std::istream_iterator<int>{ss}, std::istream_iterator<int>{});
		}
	}
	f=-1;
	// vector<int> adj[n];
	for(auto it: num)
	{
		if(f>=0 && f<n)
		{
			// cout<<f<<" ";
			for(auto itr: it)
		  	{
		  		auto mm= itr-1;
		  		// cout<<mm<<" ";
		  		v[f]->add_child(mm,1);
		  		// add_edge(adj, f, mm);
		  	}
		  	// cout<<endl;
		}
		
	  	f++;
	}
  	int source= num[f][0]-1;
  	int dest= num[f][1]-1;

	s=source;
	e=dest;

	// Creating directed
	// weighted edges
	// v[0]->add_child(1,1);
	// v[0]->add_child(3,1);
	// v[1]->add_child(0,1);
	// v[2]->add_child(0, 1);
  
	// v[2]->add_child(4, 1);
  	
	// v[3]->add_child(1, 1);
  
	// v[3]->add_child(2, 1);
  	
	// v[4]->add_child(4, 1);
	//v[2]->add_child(0,1);

	vector<int> path(v.size());
	vector<int> dist = dijkstraDist(v, s, path);

	// Loop to print the distance of
	// every node from source vertex
	for (int i = 0; i < dist.size(); i++) {
		if (dist[i] == infi) {
			cout << -1<<endl;
			break;
			continue;
		}
		if(i==dest)
		cout<< dist[i] << endl;
	}
	return 0;
}