#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	Node *lchild;
	int data;
	Node *rchild;
}
class Tree
{
public:
	*root;
	Tree()
	{
		root=NULL;
	}

		void CreateTree();
		void Preorder(Node *p);
		void Postorder(Node *p);
		void Inorder(Node *p);

		void Levelorder(Node *p);
		void Height(Node *root);
			
	
};
int main()
{
	
}