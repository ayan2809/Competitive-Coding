#include<stdio.h>
#include<stdlib.h>
class node
{
    public:
    int data;
    node* left, right;
};


void printLevel(node root, int level);
int height(node* node);
node* newNode(int data);


void printOrder(node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printLevel(root, i);
}


void printLevel(node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        {
            printf("%d",root->data);
            printf(" ");
        }
    else if (level > 1)
    {
        printLevel(root->left, level-1);
        printLevel(root->right, level-1);
    }
}


int height(node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        int lheight = height(node->left);
        int rheight = height(node->right);

        if (lheight > rheight)
        {
            return(lheight + 1);
        }
        else {
        return(rheight + 1);
        }
    }
}


node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return(Node);
}


int main()
{
    int n;
    scanf("%d",n);
    for (int i=0;i<n;i++)
    {
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printOrder(root);

    return 0;
}