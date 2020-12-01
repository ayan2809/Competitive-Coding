#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
 
struct Node
{
    string data;
    struct Node *next;
};
 
struct Node *addToEmpty(struct Node *last, string data)
{
    // This function is only for empty list
    if (last != NULL)
      return last;
 
    // Creating a node dynamically.
    struct Node *temp = 
           (struct Node*)malloc(sizeof(struct Node));
 
    // Assigning the data.
    temp -> data = data;
    last = temp;
 
    // Creating the link.
    last -> next = last;
 
    return last;
}
 
struct Node *addBegin(struct Node *last, string data)
{
    if (last == NULL)
        return addToEmpty(last, data);
 
    struct Node *temp = 
            (struct Node *)malloc(sizeof(struct Node));
 
    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
 
    return last;
}
 
struct Node *addEnd(struct Node *last, string data)
{
    if (last == NULL)
        return addToEmpty(last, data);
     
    struct Node *temp = 
        (struct Node *)malloc(sizeof(struct Node));
 
    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
    last = temp;
 
    return last;
}
 
//struct Node *addAfter(struct Node *last, int data, int item)
//{
//    if (last == NULL)
//        return NULL;
// 
//    struct Node *temp, *p;
//    p = last -> next;
//    do
//    {
//        if (p ->data == item)
//        {
//            temp = (struct Node *)malloc(sizeof(struct Node));
//            temp -> data = data;
//            temp -> next = p -> next;
//            p -> next = temp;
// 
//            if (p == last)
//                last = temp;
//            return last;
//        }
//        p = p -> next;
//    }  while(p != last -> next);
// 
//    cout << item << " not present in the list." << endl;
//    return last;
// 
//}
 
void traverse(struct Node *last)
{
    struct Node *p;
 
    // If list is empty, return.
    if (last == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
 
    // Pointing to first Node of the list.
    p = last -> next;
 
    // Traversing the list.
    do
    {
        cout << p -> data << " ";
        p = p -> next;
 
    }
    while(p != last->next);
 
}
int count(struct Node *last)
{
	int f=0;
    struct Node *p;
 
    // If list is empty, return.
    if (last == NULL)
    {
        //cout << "List is empty." << endl;
        return 0;
    }
 
    // Pointing to first Node of the list.
    p = last -> next;
 
    // Traversing the list.
    do
    {
    	f++;
        //cout << p -> data << " ";
        p = p -> next;
        
 
    }
    while(p != last->next);
    return f;
 
}
void traverse2(struct Node *last)
{
	int f=0;
    struct Node *p;
 
    // If list is empty, return.
    if (last == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
 
    // Pointing to first Node of the list.
    p = last -> next;
 
    // Traversing the list.
    do
    {
    	f++;
        cout << p -> data << " ";
        p = p -> next;
        if(f==4)
        break;
 
    }
    while(p != last->next);
 
}
void DeleteFirst(struct Node* head) 
{ 
    struct Node *previous = head, *firstNode = head; 
  
    // check if list doesn't have any node 
    // if not then return 
    if (head == NULL) { 
        printf("\nList is empty\n"); 
        return; 
    } 
  
    // check if list have single node 
    // if yes then delete it and return 
    if (previous->next == previous) { 
        head = NULL; 
        return; 
    } 
  
    // traverse second node to first 
    while (previous->next != head) { 
  
        previous = previous->next; 
    } 
  
    // now previous is last node and 
    // first node(firstNode) link address 
    // put in last node(previous) link 
    previous->next = firstNode->next; 
  
    // make second node as head node 
    head = previous->next; 
    free(firstNode); 
    return; 
} 
// Driven Program
int main()
{
    struct Node *last = NULL;
    struct Node *last2=NULL;
 	cout<<"Enter a number greater than 5 :";
 	int n=0;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{  
	string a=0; 
 	cin>>a;
 	if(i==0)
 	last = addToEmpty(last, a);
 	else
 	last=addEnd(last,a);
	 }
	 last2=last;
	 cout<<"The linked list before deletion is: "; 
	traverse(last)   ; 
	DeleteFirst(last);
    cout<<"The linked list after deletion is : "; 
	traverse(last)   ; 
   	return 0;
}
