#include<iostream>
using namespace std;
template <typename T>
class queueUsingArray{
	
	T *data;
	int nextIndex;
	int firstIndex;
	int capacity;
	int size;

public:
	queueUsingArray(int s)
	{
		data= new T(s);
		nextIndex=0;
		firstIndex=-1;
		capacity=s;
		size=0;
	}
	int getSize()
	{
		return size;
	}
	bool isEmpty()
	{
		return size==0;
	}
	// insert elements
	
	void enqueue (T element)
	{
		if(size==capacity)
		{
			cout<<"Queue is Full"<<endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex=(nextIndex+1)%capacity;
		if(firstIndex==-1)
		{
			firstIndex=0;
		}
		size++;
	}

	T front()
	{
		if(isEmpty())
		{
			cout<<"Queue is empty!"<<endl;
			return 0;
		}
		return data[firstIndex];

	}

	T dequeue(){
		if(isEmpty())
		{
			cout<<"Queue is empty"<<endl;
			return 0;
		}
		T ans= data[firstIndex];
		firstIndex=(firstIndex+1)%capacity;
		size--;
		if(size==0)
		{
			firstIndex=-1;
			nextIndex=0;
		}
		return ans;
	}
};