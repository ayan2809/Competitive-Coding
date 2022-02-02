#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"

// Node class
class Node
{
	public:
		int data;
		Node *next;
	Node(int data)
	{
		this->data= data;
		next=NULL;
	}
};

// enter into the LL
// use a head and tail node to 
// reduce the complexity of the input

Node * takeInput()
{
	int data;
	cin>>data;
	Node *head =NULL;
	Node *tail =NULL; 
	while(data!=-1)
	{
		Node *newNode= new Node(data);
		if(head==NULL)
		{
			head=newNode;
			tail= newNode;
		}
		else
		{
			tail->next= newNode;
			tail= tail->next;
			// head->next=newNode;
			// head=head->next;
		}
		cin>>data;
	}
}

// insert at a particular index
Node *insertNode(Node *head, int i, int data){
	Node *newNode= new Node(data);
	int count=0;
	Node *temp= head;

	// inserting into the firstnode
	// will change the head pointer
	// thus we need to change the pointer
	// and reinitialise head
	if(i==0)
	{
		newNode->next=head;
		head=newNode;
		return head;
	}

	// traverse till the point
	while(temp!=NULL && count<i-1)
	{
		temp=temp->next;
		count++;
	}

	// execute this only when 
	// pointer is not null
	if(temp!=NULL)
	{
		Node *a= temp->next;
		temp->next=newNode;
		newNode->next=a;
	}
	return head;
}

// print the LL
void print(Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

// main function
int main()
{
	// // statically
	// Node n1(1);
	// Node *head= &n1;
	// Node n2(2); 
	// n1.next=&n2;


	// // Dynamically Created
	// Node *n3= new Node(10);
	// Node *n4= new Node(20);
	// n3->next= n4; 

	// input using the function
	takeInput();

}