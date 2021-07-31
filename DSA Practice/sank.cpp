#include<bits/stdc++.h>
using namespace std;
struct Node{
public:
    int transactDate;
    string location;
    Node *next;
}*first=NULL;

int maximum=0;


void push(Node ** head,int trans, string location)
{
    

    Node* node= new Node();
    node->transactDate= newData;
    node-> location=location;
    node->next=*head;
    *head= node;

}

void Display(Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        Display(p->next); 
    }
}


Node* SortedMerge(Node* a, Node* b);
void FrontBackSplit(Node* source,
                    Node** frontRef, Node** backRef);
 

void MergeSort(Node** headRef)
{
    Node* head = *headRef;
    Node* a;
    Node* b;
 
    
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }
 
    
    FrontBackSplit(head, &a, &b);
 
   
    MergeSort(&a);
    MergeSort(&b);
 
    
    *headRef = SortedMerge(a, b);
}
 

Node* SortedMerge(Node* a, Node* b)
{
    Node* result = NULL;
 
    /* Base cases */
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);
 

    if (a->data <= b->data) {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
    return (result);
}
 

void FrontBackSplit(Node* source,
                    Node** frontRef, Node** backRef)
{
    Node* fast;
    Node* slow;
    slow = source;
    fast = source->next;
 
    
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
 
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}
 

int main()
{
    int transacArr[]={12072021,16062021,04062021,15072021,24052021,22062021};
    string location[]={"chennai","banagalore","dehradun","jaipur", "hyderabad", "bangalore", "pune"}

    Node *head=NULL;
    for(int i=0;i<sizeof((transacArr)/sizeof(transacArr[0]));i++)
    {
        push(&head,transacArr[i],location[i]);
    }


}