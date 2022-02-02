#include<vector>
using namespace std;
template <typename T>
class BinaryTreeNode
{
public:
	T data;
	// to make the data of that particular
	// data type
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	// constructor
	BinaryTreeNode(T data)
	{
		this->data=data;
		left=NULL;
		right=NULL;
	}

	// destructor to delete whole tree
	~BinaryTreeNode()
	{
		delete left;
		delete right;
	}
};