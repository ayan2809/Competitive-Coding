#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};



Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    
    if(pos==0)
    {
        head=head->next;
        return head;
    }
    int k=0;
    Node *prev=head;
    Node *curr= head->next;
    Node * next= head->next->next;
    // cout<<prev->data<<curr->data<<next->data<<endl;
    while(next!=NULL)
    {
        if(k==pos-1)
        {
            prev->next=next;
            delete curr;
        }
        prev=prev->next;
        curr=curr->next;
        next=next->next;
        k++;
    }
    if(k==pos-1)
    {
        prev->next=NULL;
    }
    return head;
}

// Recursive Insertion to LL
Node *insertNode(Node *head, int pos, int data)
{
    if(head==NULL)
        return head;
    
    if(pos==0)
    {
        head=head->next;
        return head;
    }
    int k=0;
    Node *prev=head;
    Node *curr= head->next;
    Node * next= head->next->next;
    // cout<<prev->data<<curr->data<<next->data<<endl;
    while(next!=NULL)
    {
        if(k==pos-1)
        {
            prev->next=next;
            delete curr;
        }
        prev=prev->next;
        curr=curr->next;
        next=next->next;
        k++;
    }
    if(k==pos-1)
    {
        prev->next=NULL;
    }
    return head;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        int pos;
        cin >> pos;
        head = deleteNode(head, pos);
        print(head);
    }

    return 0;
}