#include<vector>
using namespace std;
template <typename T>
class treeNode
{
public:
	T data;
	// to make the data of that particular
	// data type
	vector<treeNode<T>*> children;

	// constructor
	treeNode(T data)
	{
		this->data=data;
	}

	// destructor to delete whole tree
	~treeNode()
	{
		for(int i=0;i<children.size();i++)
		{
			delete children[i];
		}
	}
};