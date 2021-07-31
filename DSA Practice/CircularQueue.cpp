#include<bits/stdc++.h>
using namespace std;
class Queue
{
private:
	int front;
	int rear;
	int size;
	int *Q;
public:
	Queue(){
		front=rear=-1;
		size=10;
		Q=new int[size];
	}
	Queue(int size)
	{
		front=rear=-1;
		this->size=size;
		Q=new int[this->size];
	}
	void enqueue(int x);
	int dequeue();
	void Display();
};
void Queue :: enqueue(int x)
{
	if((rear+1)%size==front)
		cout<<"Queue Full"<<endl;
	else
	{
		rear=(rear+1)%size;
		Q[rear]=x;
	}
}
int Queue:: dequeue()
{
	int x=-1;
	if(front==rear)
		cout<<"Queue is Empty"<<endl;
	else
	{
		front=(front+1)%size;
		x=Q[front];

		//front++;
	}
	return x;
}

void Queue::Display()
{
	// for(int i=front+1;i<=rear;i++)
	// 	cout<<Q[i]<<" ";
	// cout<<endl;

	int i=front+1;
	do
	{
		printf("%d ",Q[i]);
		i=(i+1)%size;
	}while(i!=(rear+1)%size);
	cout<<endl;
}
int main()
{
	Queue q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.Display();
	cout<<"This was released from the queue :"<<q.dequeue()<<endl;
	q.Display(); 
}