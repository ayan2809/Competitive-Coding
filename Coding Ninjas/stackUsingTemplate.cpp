#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
template<typename T>
class stackUsingTemplate{
	T *data;
	int nextIndex;
	int capacity;

public:
	// stack using array
	stackUsingTemplate()
	{
		data=new T(4);
		nextIndex=0;
		capacity=4;
	}

	// find the size of stack
	int size()
	{
		return nextIndex;
	}

	// check for emptiness
	bool isEmpty(){
		return nextIndex==0;
	}

	// insert elements
	void push(T element){
		if(nextIndex==capacity)
		{
			// whenever it is full we 
			// double the capacity
			// cout<<"Stack Overflow"<<endl;
			// return;
			T *neData= new T(2*capacity);
			for(int i=0;i<capacity;i++)
			{
				neData[i]=data[i];
			}
			delete [] data;
			data=neData;
			capacity*=2;
		}
		data[nextIndex]=element;
		nextIndex++;
	}

	//delete element
	T pop(){
		if(isEmpty())
		{
			cout<<"Stack is empty"<<endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	} 

	// find topmost element
	T top()
	{
		if(isEmpty())
		{
			cout<<"Stack is empty"<<endl;
			return 0;
		}
		return data[nextIndex - 1];
	}
};

