#include<iostream>
using namespace std;
template <typename T>
class Node{
public:
	T data;
	Node <T> *next;
	Node(T data)
	{
		this->data=data;
		next=NULL;
	}
};
template <typename T> 
class Stack
{
	Node<T> *head;
	int size;
	public:
		Stack(){
			head=NULL;
			size=0;

		}
		int getSize(){
			return size;
		}
		bool isEmpty(){
			if(head==NULL)
				return true;
			return false;
		}
		void push(T element){
			Node *newNode= new T(element);
			if(head==NULL)
			{
				head=newNode;
				size++;
				return;
			}
			newNode->next=head;
			head=newNode;
			size++;
			// head->data=element;
			// head=head->next;
		}
		T pop(){
			if(head==NULL)
				return 0;
			T ans=head->data;
			head=head->next;
			size--;
			return ans;
		}
		T top(){
			if(head==NULL)
				return 0;
			return head->data;
		}
};
