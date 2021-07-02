#include<iostream>
using namespace std;

struct Node
{
int data;
  Node*next;
}*head=NULL;

 void push(int newElement) {
      Node* newNode = new Node();
      newNode->data = newElement;
      newNode->next = NULL; 
      if(head == NULL) {
        head = newNode;
      } else {
        Node* temp = head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newNode;
      }    
    }

void del()
{
   //Node *s=head;
  Node *s= head;
  Node *p=NULL;
 	 while(s!=NULL)
    {
      if(s->next->next==NULL)
      {
        // head->next=head->next->next;
        // head->data=head->next->next->data;
        p->next=s->next;//->next;
        int x=s->data;
        delete(s);
        return;
        //delete(s);
      }
      p=s;
      s=s->next;
    }
}


void display()
{
  Node *s=head;
  while(s!=NULL)
  {
	cout<<s->data<<" ";
    s=s->next;
  }
  
}

   



int main()
{
  int n;
  // do
  // {
  //   cin>>n;
  //   if(n>0)
  //     push(n);
  // }
  // while(n>0);
  cin>>n;
  while(n--)
  {
    int m;
    cin>>m;
    push(m);
  }
  display();
  del();
  cout<<endl;
  display();
  //Type your code here
  return 0;
}