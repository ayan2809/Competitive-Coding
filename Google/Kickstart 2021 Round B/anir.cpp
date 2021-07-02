
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct node {
	int key;
	struct node *left, *right;
};

struct node* newNode(int item)
{
	struct node* temp
		= (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}


void reverseSortPrint(struct node* root)
{
	if (root != NULL) {
		reverseSortPrint(root->right);
		printf("%d ", root->key);
		reverseSortPrint(root->left);
	}
}


struct node* insert(struct node* node, int key)
{

	if (node == NULL)
		return newNode(key);


	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);


	return node;
}

int main()
{
	
	struct node* root = NULL;
	int n=0;
	scanf("%d",&n);
	int input=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&input);
		if(i==0)
			root=insert(root,input);
		else
		{
			insert(root,input);
		}
	}
}