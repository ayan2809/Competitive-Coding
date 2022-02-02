#include<iostream>
using namespace std;

class queueUsingLL{
	Node *head;
	Node *tail;
	int size;
public:
	queueUsingLL()
	{
		head=NULL;
		tail=NULL;		
		size=0;
	}
	int getSize(){
		return size;
	}
	bool isEmpty(){
		if(head==NULL && tail==NULL)
			return true;
		return false;
	}
	void enqueue(int element){
		Node *newNode=new Node(element);
		if(isEmpty())
		{
			head=newNode;
			tail=newNode;
		}
		else if(head!=NULL)
		{
			tail->next=newNode;
			tail=newNode;
		}
	}
	int front()
	{
		return head->data;
	}
	int dequeue(){
		int x=head->data;
		head=head->next;
		return x;
	}

};