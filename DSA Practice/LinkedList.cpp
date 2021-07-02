#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next;
}*first=NULL,*second=NULL;
int maximum=0;
void push(Node ** head,int newData)
{
	Node* node= new Node();
	node->data= newData;
	node->next=*head;
	*head= node;

}
//normal iterative display
void DisplayIter(Node *p)
{
	while(p!=NULL)
	{
		cout<<" "<<p->data;
		p=p->next;
	}
	cout<<endl;
}
//recursive function to display in reverse
void reverseDisplay(Node *p)
{
	if(p!=NULL)
	{
		reverseDisplay(p->next); 
		cout<<p->data<<" ";
	}
}
//recursive function to display normally
void Display(Node *p)
{
	if(p!=NULL)
	{
		cout<<p->data<<" ";
		Display(p->next); 
	}
}
int count(Node *p)
{
	if(p!=NULL)
	{
		return 1+count(p->next);
	}
	else
	{
		return 0;
	}
}
int sumOfALL(Node *p)
{
	if(p!=NULL)
	{
		return p->data+sumOfALL(p->next);

	}
	else
	{
		return 0;
	}
}

int maximumOfAll(Node *p)
{
	int x=0;
	if(p!=NULL)
	{
		x=maximumOfAll(p->next);
		if(x>p->data)
		{
			return x;
		}
		else
		{
			return p->data;
		}
	}
	else
	{
		return 0;
	}
}

int minimumOfAll(Node *p)
{
	int x=INT_MAX;
	if(p==0)
		return INT_MAX;
	x=minimumOfAll(p->next);
	return x<p->data?x:p->data;
}

//Linear search because binary search 
//on linked list is not possible
//recursive function
Node* LinearSearchRecur(Node *p,int key)
{
	if(p==NULL)
		return NULL;
	if(key==p->data)
		return p;
	return LinearSearchRecur(p->next,key);

}
int size=0;
//inserting before first node and at any position
Node * getNode(int data)
{
	Node *temp= new Node();
	temp->data=data;
	temp->next=NULL;
	return temp;
}
//insert a node at any position
void Insert(Node **p,int index,int x)
{
	if (index < 0 || index > size + 1)
        cout << "Invalid position!" << endl;
    else {
    	//index=size-index;
 
        // Keep looping until the pos is zero
        while (index--) {
 
            if (index == 0) {
 
                // adding Node at required position
                Node* temp = new Node();
                 temp->data=x;
                 // Making the new Node to point to
                // the old Node at the same position
                temp->next = *p;
 
                // Changing the pointer of the Node previous
                // to the old Node to point to the new Node
                *p = temp;
            }
            else
              // Assign double pointer variable to point to the
              // pointer pointing to the address of next Node
              p = &(*p)->next;
        }
        size++;
    }

} 

//alternate insert function with another type of algo
//its wrong and not working so dont bother to change this or read this
// void InsertAlternate(Node **p,int position, int data)
// {
// 	if(position<0 || position>size+1)
// 	{
// 		cout<<"Invalid Postion"<<endl;
// 		return;
// 	}
// 	else
// 	{
// 		Node * temp= new Node();
// 		if(position==0)
// 		{
			
// 			temp->data=data;
// 			temp->next=*p;
// 			*p=temp;
// 		}
// 		else
// 		{
// 			for(int i=0;i<position;i++)
// 			{
// 				p=&(*p)->next;
// 			}
// 			temp->data=data;
// 			temp->next=(*p)->next;
// 			(*p)->next=temp;
// 		}
// 	}
// }
//Insert using array
void InsertArray(int newElement)
{
	  Node* newNode = new Node();
      newNode->data = newElement;
      newNode->next = NULL; 
      if(first == NULL) {
        first = newNode;
      } else {
        Node* temp = first;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newNode;
      }
}
void InsertArray2(int newElement)
{
	  Node* newNode = new Node();
      newNode->data = newElement;
      newNode->next = NULL; 
      if(second == NULL) {
        second = newNode;
      } else {
        Node* temp = second;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newNode;
      }
}
//Insert a node in a sorted linked list
void InsertSorted(Node *p,int x)
{
	Node *t,*q=NULL;
	t=new Node();
	t->data=x;
	t->next=NULL;

	if(first==NULL)
	{
		(first)=t;
	}
	else
	{
		while(p && p->data<=x)
		{
			q=p;
			p=p->next;
		}
		if(p==first)
		{
			t->next=(first);
			first=t;
		}
		else
		{
			t->next=q->next;
			q->next=t;
		}
	}

}
void checkSorted(Node *p)
{ 
	int checker=INT_MIN;
	while(p!=NULL)
	{
		if(p->data<checker)
		{
			cout<<"NOT SORTED"<<endl;
			return;
		}
		else
		{
			checker=p->data;
		}
		p=p->next;
	}
	cout<<"The linked list is sorted"<<endl;

}
void deleteDuplicates()
{
	Node *p=first;
	Node *q=first->next;
	while(q!=NULL)
	{
		if(p->data !=q->data)
		{
			p=q;
			q=q->next;
		}
		else
		{
			p->next=q->next;
			delete(q);
			q=p->next;
		}
	}

}
void reverseLinkedList()
{
	Node *p=first;
	Node *q=NULL;
	Node *r=NULL;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}
void * recursiveReverseLL(Node *q,Node *p)
{
	if(p!=NULL)
	{
		recursiveReverseLL(p,p->next);
		p->next=q;
	}
	else
	{
		first=q;
	}
}
void concatTwoLL(Node *head1,Node * head2)
{
	Node *p=head1;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=head2;
	head2=NULL;
}
// DoubleNode * ReverseDLL(DoubleNode * head)
// {
// 	DoubleNode *temp=head;
// 	DoubleNode *newHead=head;
// 	while(temp!=NULL)
// 	{
// 		DoubleNode prev=temp->prev;
// 		temp->prev=temp->next;
// 		temp->next=prev;
// 		newHead=temp;
// 		temp=temp->prev;
// 	}
// 	return newHead;
// }
//
// void InsertinDLL(Node *p, int index, int x)
// {
// 	Node * t;
// 	int i=0;
// 	if(index<0 || index> length(p))
// 	{
// 		return;
// 	}
// 	if(index==0)
// 	{
// 		t=new Node();
// 		t->data=x;
// 		t->prev=first;
// 		first->prev=t;
// 		first=t;
// 	}
// 	else
// 	{
// 		for(int i=0;i<index-1;i++)
// 		{
// 			p=p->next;
// 		}
// 		t=new Node();
// 		t->data=x;
// 		t->prev=p;
// 		t->next=p->next;
// 		if(p->next)
// 			p->next->prev=t;
// 		p->next=t;
// 	}

// }

int main()
{
	//head is the first linked list
	//first will be the second linked list
	Node *head= NULL;
	push(&head, 9);
	push(&head, 7);
	
	push(&head, 4);
	push(&head, 2);
	Display(head);
	cout<<endl;
	reverseDisplay(head);
	cout<<endl<<count(head);
	cout<<endl<<sumOfALL(head);
	cout<<endl<<maximumOfAll(head);
	
	cout<<endl<<minimumOfAll(head);
	Node *linear=NULL;
	linear=LinearSearchRecur(head,7);
	if(linear==NULL)
		cout<<endl<<"Not Found"<<endl;
	else
		cout<<endl<<"Found "<<endl;
	//size=count(head);
	size=4;
	
	 size++;
	 int A []={3,6,9,12};
	 for(int i=0;i<sizeof(A)/sizeof(A[0]);i++)
	 {
	 	InsertArray(A[i]);
	 }
	 int B []={2,4,5,10};
	 for(int i=0;i<sizeof(B)/sizeof(B[0]);i++)
	 {
	 	InsertArray2(B[i]);
	 }
	 cout<<endl;
	 cout<<"The linked list before insertion :";
	DisplayIter(first);
	cout<<"The linked list after insertion :";
	Insert(&head,3,12);
	InsertSorted(first,6);
	DisplayIter(first);
	 checkSorted(head);
	 deleteDuplicates();
	 DisplayIter(first);
	 reverseLinkedList();
	 Node *p=first,*q=NULL;
	 recursiveReverseLL(q,p);
	 DisplayIter(first);
	// cout<<INT_MAX;
	concatTwoLL(first,second);
	DisplayIter(first);
	// Display(head);
}