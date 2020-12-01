#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>  
struct node 
{ 
    char key[100]; 
    struct node *left, *right; 
}; 
struct node *newNode(char item[]) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key[100] = item[100]; 
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
void search(struct node *root,char k[100],int p){
	if(root!=NULL)
	{
		if(k[100]==root->key[100])
		{
			printf("\nThe position of the player is: %p",&root->key);
			if(p!=-1)
			{
				printf("\nThe player after the current player is: %d",p);
			}
			if(root->left!=NULL)
			{
				printf("\nThe player before the current player is :%d",root->left->key);
			}
			if(root->right!=NULL)
			{
				printf("\nThe player after the current player is :%d",root->right->key);
			}
			return;
		}
		else if(k[100]>root->key[100]){
			search(root->right,k,root->key[100]);
		}
		else{
			search(root->left,k,root->key[100]);
		}
	}
	else{
		printf("The element was not found");
	}
}
struct node* insert(struct node* node, char key[100]) 
{ 
    if (node == NULL) 
		return newNode(key); 
  
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    return node; 
} 

int main(void) 
{ 	
	int n,a[40];
	char m[100];
	
	struct node *root = NULL; 
	while(true){
		printf("\nEnter your choice \n1.Insert\n2.Search\n3.Find shortest path\n4.Display\n5.Exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case(1):
				printf("\nEnter the value: ");
	    		scanf("%s",&m);
	    		if(root==NULL)
	    			root=insert(root,m);
	    		else
	    			insert(root,m);
	    		break;
	    	case(2):
	    		printf("\nEnter the element to be searched: ");
				scanf("%s",&m);
				search(root,m,-1);
				break;
//			case(3):
//				printf("\nEnter the value of the sum: ");
//			    scanf("%s",&m);
//			    shortest(root,m,0,a,0);
//			    break;
			case(3):
				printf("\n Inorder traversal \n: ");
				inorder(root);
				break;
			default:
				return 0;
		}
	}
}
