#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	Node *lchild;
	int data;
	Node *rchild;
};
class Queue
{
private:
	int front;
	int rear;
	int size;
	Node **Q;
public:
	Queue()
	{
		front=rear=-1;
		size=10;
		Q=new Node*[size];
	}
	Queue(int size)
	{
		front=rear=-1;
		this->size=size;
		Q=new Node *[this->size];
	}
	void enqueue(int x);
	Node * dequeue();
	void Display();
};
class Tree
{
public:
	Node *root;
	Tree(){root=NULL;}
	void CreateTree();
	void Preorder(Node *p);
	void Postorder(Node *p);
	void Inorder(Node *p);
	void Levelorder(Node *p);
	void Height(Node *root);
};


void Tree::Preorder(struct Node *p)
{
	if(p)
	{
		printf("%d ",p->data);
		Preorder(p->lchild);
		Preorder(p->rchild);
	}
}
void Tree::Inorder(struct Node *p)
{
	if(p)
	{
		Inorder(p->lchild);
		printf("%d ",p->data);
		Inorder(p->rchild);
	}
}
void Tree::Postorder(struct Node *p)
{
	if(p)
	{
		Postorder(p->lchild);
		Postorder(p->rchild);
		printf("%d ",p->data);
	}
}
void Tree::Levelorder(struct Node *root)
{
	Queue q(100);
	printf("%d ",root->data);
	q.enqueue(root);
	while(!q.isEmpty())
	{
		root=q.dequeue();
		if(root->lchild)
		{
			printf("%d ",root->lchild->data);
			q.enqueue(root->lchild);
		}
		if(root->rchild)
		{
			printf("%d ",root->rchild->data);
			q.enqueue(root->rchild);
		}
	}
}
int Tree::Height(struct Node *root)
{
	int x=0,y=0;
	if(root==0)
		return 0;
	x=Height(root->lchild);
	y=Height(root->rchild);
	if(x>y)
		return x+1;
	else
		return y+1;
}
void Queue:: enqueue(Node *x)
{
	if(rear==size-1)
	{
		cout<<"Queue Full"<<endl;
	}
	else
	{
		rear++;
		Q[rear]=x;
	}
}
Node * Queue::dequeue()
{
	Node *x=NULL;
	if(front==rear)
	{
		 cout<<"Queue is empty"<<endl;
	}
	else
	{
		x=Q[front+1];
		front++;
	}
	return x;
}

int main()
{
	Tree t;
	t.CreateTree();
	cout<<"Preorder ";
	t.Preorder();
	cout<<endl;
	cout<<"Inorder ";
	t.Inorder();
	cout<<endl<<endl;
}