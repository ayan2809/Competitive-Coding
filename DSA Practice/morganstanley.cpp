#include <bits/stdc++.h>
using namespace std;

/* A tree node structure */
class node {
public:
	int data;
	node* left;
	node* right;
};


bool printPath(node* root,
			node* target_leaf)
{

	if (root == NULL)
		return false;

	
	if (root == target_leaf || printPath(root->left, target_leaf) ||
							printPath(root->right, target_leaf)) {
		cout << root->data << " ";
		return true;
	}

	return false;
}


void getTargetLeaf(node* Node, int* max_sum_ref,
				int curr_sum, node** target_leaf_ref)
{
	if (Node == NULL)
		return;

	
	curr_sum = curr_sum * Node->data;

	
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


int maxSumPath(node* Node)
{
	
	if (Node == NULL)
		return 0;

	node* target_leaf;
	int max_sum = INT_MIN;


	getTargetLeaf(Node, &max_sum, 1, &target_leaf);

	
	//printPath(Node, target_leaf);

	return max_sum; 
}


node* newNode(int data)
{
	node* temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}


int main()
{
	node* root = NULL;

	
	root = newNode(-4);
	root->left = newNode(1);
	root->right = newNode(3);
	root->right->right = newNode(4);
	root->right->right->right = newNode(7);

	// cout << "Following are the nodes on the maximum "
	// 		"sum path \n";
	int sum = maxSumPath(root);
	cout << "\nSum of the nodes is " << sum;
	return 0;
}