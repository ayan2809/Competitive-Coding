# include <stdio.h>
#include<stdbool.h>
# include <stdlib.h>
typedef struct BST {
   int data;
   struct BST *left, *right;
} node;
static bool flag=false;
 void inorder(node *);
node* insert(node *, int);
node * deleten(node *,int);
node * minValueNode( node* );
node * suc(node *, int ) ;
node * pre(node *, int ) ;
node *newnode(int key) {
   node *temp;
   temp = (node *) malloc(sizeof(node));
   temp->data=key;
   temp->left = NULL;
   temp->right = NULL;
   return temp;
}
void search(node*,int);
int main() 
{
   int choice,n,i;
   char ans = 'N';
   int key;
   int m;
   node *new_node, *root, *tmp, *parent;
   node *get_node();
   root = NULL;
   printf("Enter number of values\n");
   scanf("%d",&n);
    printf("\nEnter The Element ");
   
   for(i=0;i<n;i++){
    scanf("%d",&m);
   	root=insert(root,m);
   }
   
   int k;
   
  
   printf("\nSorted order of the elements is\n");
   inorder(root);
   printf("\nEnter a element to search\n");
    scanf("%d",&k);
    search(root,k);
    printf("\nDeleting 40 from BST\n");
    root=deleten(root,40);
    printf("Inorder traversal\n");
    inorder(root);
    printf("\nDeleting 88 from BST\n");
	root=deleten(root,88);
	printf("Inorder traversal\n");
    inorder(root);
    
    printf("\nEnter a key to search pre and suc\n");
    scanf("%d",&key);
suc(root,key);
pre(root,key);
}
void inorder(node *temp) {
   if (temp != NULL) {
      inorder(temp->left);
       printf("%d,", temp->data);
      inorder(temp->right);
   }
}
node* insert(node *root, int key ) {
if(root==NULL)return newnode(key);
if(key<root->data)
root->left=insert(root->left,key);
else
root->right=insert(root->right,key);
   }
  void search(node *root, int key)

{
	if(root->data ==key)
	
	{	flag=true;
	return;
	printf("Address of element %d is %d,root\n",key,&root);
	
	
	}
	 if (flag==false&&root->data < key) {search(root->right, key);
	 printf("Address of element %d is %d,right\n",key,&root->right);
}


	
    if(flag==false&&root->data>key){
	
    search(root->left, key);
	printf("Address of element %d is %d,left\n",key,&root->left); 

	
}
}



 node * minValueNode( node* node) 
{ 
    
  
   
    while (node && node->left != NULL) 
        node =node->left; 
  
    return node; 
} 
node *deleten(node *root,int key)
{
	if (root == NULL) return root; 
  
  
    if (key < root->data) 
        root->left = deleten(root->left, key); 
  
    else if (key > root->data) 
        root->right = deleten(root->right, key); 
  
    
    else
    { 
        
        if (root->left == NULL) 
        { 
            node *temp = root->right; 
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            node *temp = root->left; 
            free(root); 
            return temp; 
        } 
  
        
       node* temp = minValueNode(root->right); 
  
        
        root->data = temp->data; 
  
        
        root->right = deleten(root->right, temp->data); 
    } 
    return root; 
} 
node *suc(node * root,int key)
{
	node *succ=NULL;
	while(root!=NULL)
	{
		if(key>root->data)
		{
			succ=root;
			root=root->right;
			printf("Successor is %d\n",root->right->data);
		}
		else if(key<root->data)
		{
			root=root->left;
			printf("successor is %d\n",root->left->data);
		}
		else
		break;
	}
	
	return succ;
}
node *pre(node * root,int key)
{
	node *pred=NULL;
	while(root!=NULL)
	{
		if(key>root->data)
		{
			pred=root;
			root=root->right;
			printf("Predecessor is %d\n",root->left->data);
		}
		else if(key<root->data)
		{
			root=root->left;
			printf("Predecessor is %d\n",root->right->data);
		}
		else
		break;
	}
	
	return pred;
}

