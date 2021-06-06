
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

  

void printPathsRecur(node* node, int path[], int pathLen);
void printArray(int ints[], int len);


void printPaths(struct node* node)
{
	int path[1000];
	printPathsRecur(node, path, 0);
}


void printPathsRecur(struct node* node, int path[], int pathLen)
{
	if (node == NULL)
		return;
	
	/* append this node to the path array */
	path[pathLen] = node->key;
	pathLen++;
	
	/* it's a leaf, so print the path that led to here */
	if (node->left == NULL && node->right == NULL)
	{
		printArray(path, pathLen);
	}
	else
	{
		/* otherwise try both subtrees */
		printPathsRecur(node->left, path, pathLen);
		printPathsRecur(node->right, path, pathLen);
	}
}

int maxiarray[100];
int maxi=-1;
int maxiincrement=0;
void printArray(int ints[], int len)
{
	int i;
	int sum=0;
	for (i = 0; i < len; i++)
	{
		sum+=ints[i];
		
	}
	printf("%d ",sum);
	if(sum>maxi)
	{
		maxiarray[maxiincrement++]=sum;
		//maxi=sum;
	}
	
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

	reverseSortPrint(root);
	printf("\n");
	printf("%d \n",maxDepth(root)-1);
	printPaths(root);




	
	int a=0;
	for (int i = 0; i < maxiincrement; ++i) 
        {
            for (int j = i + 1; j < maxiincrement; ++j) 
            {
                if (maxiarray[i] < maxiarray[j]) 
                {
                    a = maxiarray[i];
                    maxiarray[i] = maxiarray[j];
                    maxiarray[j] = a;
                }
            }
        }

     int check=1;
     for(int i=0;i<maxiincrement;i++)
	{
		//printf("%d ",maxiarray[i]);
	
	int flag=1;

	for (int d = 2; d <= sqrt(maxiarray[i]); d++) {
 
      
        if (maxiarray[i] % d == 0) {
            flag = 0;
            break;
        }
    }
 
    if (maxiarray[i] <= 1)
        flag = 0;
 
    if (flag == 1) {
    	check=0;
        printf("\n%d", maxiarray[i]);
        break;
    }
    // else {
    //     printf("\nNP");
    // }
	}
	if(check==1)
	{
		printf("\nNP");
	}
	return 0;
}
