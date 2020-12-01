#include<stdio.h> 
#include<stdlib.h> 
   
struct node 
{ 
    int key; 
    struct node *left, *right; 
}; 
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->key); 
        inorder(root->right); 
    } 
} 
void search(struct node *root,int k,int p){
	if(root!=NULL)
	{
		if(k==root->key)
		{
			printf("\nThe address of the element is: %p",&root->key);
			if(p!=-1)
			{
				printf("\nThe predecessor of the element is: %d",p);
			}
			if(root->left!=NULL)
			{
				printf("\nThe left successor is :%d",root->left->key);
			}
			if(root->right!=NULL)
			{
				printf("\nThe right successor is :%d",root->right->key);
			}
			return;
		}
		else if(k>root->key){
			search(root->right,k,root->key);
		}
		else{
			search(root->left,k,root->key);
		}
	}
	else{
		printf("The element was not found");
	}
}
struct node* insert(struct node* node, int key) 
{ 
    if (node == NULL) 
		return newNode(key); 
  
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    return node; 
} 
void shortest(struct node* node,int k,int s,int a[],int i)
{
	if(node->key+s==k)
	{
		printf("\nPath exists: ");
		a[i++]=node->key;
		for(int j=0;j<i;j++)
		{
			printf("%d ",a[j]);
		}
	}
	else if(node->key+s<k){
		s=s+node->key;
		a[i++]=node->key;
		if(node->right!=NULL)
			shortest(node->right,k,s,a,i);
		if(node->left!=NULL)
			shortest(node->left,k,s,a,i);
		s=s-node->key;
		i--;
	}
}
int main(void) 
{ 	
	int n,m,a[40];
	
	struct node *root = NULL; 
	while(true){
		printf("\nEnter your choice \n1.Insert\n2.Search\n3.Find shortest path\n4.Display\n5.Exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case(1):
				printf("\nEnter the value: ");
	    		scanf("%d",&m);
	    		if(root==NULL)
	    			root=insert(root,m);
	    		else
	    			insert(root,m);
	    		break;
	    	case(2):
	    		printf("\nEnter the element to be searched: ");
				scanf("%d",&m);
				search(root,m,-1);
				break;
			case(3):
				printf("\nEnter the value of the sum: ");
			    scanf("%d",&m);
			    shortest(root,m,0,a,0);
			    break;
			case(4):
				printf("\n Inorder traversal \n: ");
				inorder(root);
				break;
			default:
				return 0;
		}
	}
}
