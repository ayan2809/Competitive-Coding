#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};


class Queue {
    Node *head;
	Node *tail;
	int size;
   public:
    Queue() {
		
        head=NULL;
		tail=NULL;		
		size=0;
	}
	
    int getSize(){
		return size;
	}
	bool isEmpty() {
		return size==0;
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
        size++;
	}
	int front()
	{
        if(head==NULL)
            return -1;
		return head->data;
	}
	int dequeue(){
        if(head==NULL)
            return -1;
        if(head->next ==NULL)
        {
			size--;
            int b=head->data;
            head=NULL;
            tail=NULL;
            return b;
        }
        size--;
		int x=head->data;
		head=head->next;
		return x;
	}

};


int main() {
    Queue q;

    int t;
    cin >> t;

    while (t--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                q.enqueue(input);
                break;
            case 2:
                cout << q.dequeue() << "\n";
                break;
            case 3:
                cout << q.front() << "\n";
                break;
            case 4:
                cout << q.getSize() << "\n";
                break;
            default:
                cout << ((q.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}