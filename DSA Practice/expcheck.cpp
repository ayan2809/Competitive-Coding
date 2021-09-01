// CPP program to construct a binary tree in level order.
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node* left;
	Node* right;
};

// Function to create a node with 'value' as the data
// stored in it.
// Both the children of this new Node are initially null.
struct Node* newNode(int value)
{
	Node* n = new Node;
	n->key = value;
	n->left = NULL;
	n->right = NULL;
	return n;
}

struct Node* insertValue(struct Node* root, int value,
						queue<Node *>& q)
{
	Node* node = newNode(value);
	if (root == NULL)
		root = node;

	// The left child of the current Node is
	// used if it is available.
	else if (q.front()->left == NULL)
		q.front()->left = node;

	// The right child of the current Node is used
	// if it is available. Since the left child of this
	// node has already been used, the Node is popped
	// from the queue after using its right child.
	else {
		q.front()->right = node;
		q.pop();
	}

	// Whenever a new Node is added to the tree, its
	// address is pushed into the queue.
	// So that its children Nodes can be used later.
	q.push(node);
	return root;
}

// This function mainly calls insertValue() for
// all array elements. All calls use same queue.
Node* createTree(int arr[], int n)
{
	Node* root = NULL;
	queue<Node*> q;
	for (int i = 0; i < n; i++)
	root = insertValue(root, arr[i], q);
	return root;
}


void getTargetLeaf(struct Node* Node, int* max_sum_ref,
				int curr_sum, struct Node** target_leaf_ref)
{
	if (Node == NULL)
		return;

	
	curr_sum = curr_sum * Node->key;

	
	if (Node->left == NULL && Node->right == NULL) {
		if (curr_sum > *max_sum_ref) {
			*max_sum_ref = curr_sum;
			*target_leaf_ref = Node;
		}
	}

	
	getTargetLeaf(Node->left, max_sum_ref, curr_sum,
				target_leaf_ref);
	getTargetLeaf(Node->right, max_sum_ref, curr_sum,
				target_leaf_ref);
}


int maxSumPath(struct Node* Node)
{
	
	if (Node == NULL)
		return 0;

	struct Node* target_leaf;
	int max_sum = INT_MIN;


	getTargetLeaf(Node, &max_sum, 1, &target_leaf);

	
	//printPath(Node, target_leaf);

	return max_sum; 
}
// This is used to verify the logic.
void levelOrder(struct Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> n;
	n.push(root);
	while (!n.empty()) {
		cout << n.front()->key << " ";
		if (n.front()->left != NULL)
			n.push(n.front()->left);
		if (n.front()->right != NULL)
			n.push(n.front()->right);
		n.pop();
	}
}

// Driver code
int main()
{
	int arr[] = { -4, 1,3,4,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	Node* root = createTree(arr, n);
	int sum = maxSumPath(root);
	cout << "\nSum of the nodes is " << sum<<endl;
	levelOrder(root);
	return 0;
}
