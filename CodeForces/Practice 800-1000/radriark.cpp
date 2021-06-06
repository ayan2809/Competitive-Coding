
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


void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
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
int maxDepth(struct node* node)
{
    if (node == NULL)
        return 0;
    else {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
 
        /* use the larger one */
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}
void printGivenLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->key);
    else if (level > 1)
    {
        printGivenLevel(root->right, level-1);
        printGivenLevel(root->left, level-1);
    }
}
void printLevelOrder(struct node* root)
{
    int h = maxDepth(root);
    int i;
    for (i=1; i<=h; i++)
    {
        printGivenLevel(root, i);
        printf("\n");
    }
}
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int maxLevel(struct node* root)
{
    if (root == NULL)
        return 0;
    return (1 + max(maxLevel(root->left),maxLevel(root->right)));
}
void maxLevelSum(struct node* root, int max_level,
                 int sum[], int current)
{
   
    if (root == NULL)
        return;
  
   
    sum[current] += root->key;
  
    maxLevelSum(root->left, max_level, sum,
                current + 1);
  
   
    maxLevelSum(root->right, max_level, sum,
                current + 1);
}
int maxLevelSum(struct node* root)
{
  

    int max_level = maxLevel(root);
  

    int sum[max_level + 1] = { 0 };
  
 
    maxLevelSum(root, max_level, sum, 1);
  
   
    int maxSum = 0;
  
    
    for (int i = 1; i <= max_level; i++)
        maxSum = max(maxSum, sum[i]);
  
    
    return maxSum;
}


node* temp = new node;

node* leftMostNode(node* node)
{
    while (node != NULL && node->left != NULL)
        node = node->left;
    return node;
}
  

node* rightMostNode(node* node)
{
    while (node != NULL && node->right != NULL)
        node = node->right;
    return node;
}
  

node* findInorderRecursive(node* root, node* x )
{
    if (!root)
        return NULL;
  
    if (root==x || (temp = findInorderRecursive(root->left,x)) ||
                   (temp = findInorderRecursive(root->right,x)))
    {
        if (temp)
        {
            if (root->left == temp)
            {
                printf("%d",root->key);// << "\n";
                return NULL;
            }
        }
  
        return root;
    }
  
    return NULL;
}
  

void inorderSuccesor(node* root, node* x)
{

    if (x->right != NULL)
    {
        node* inorderSucc = leftMostNode(x->right);
        printf("%d",inorderSucc->key);//<<"\n";
    }
  

    if (x->right == NULL)
    {    
        int f = 0;
          
        node* rightMost = rightMostNode(root);
  
       
        if (rightMost == x)
            printf("No inorder successor! Right most node.\n");
        else
            findInorderRecursive(root, x);
    }
}
  


// Driver Code
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

	inorder(root);
	printf("\n");
	printLevelOrder(root);
	printf("%d \n",maxLevelSum(root));
	inorderSuccesor(root, root->left);
	return 0;
}

