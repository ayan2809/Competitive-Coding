#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
class stackUsingArray{
	int *data;
	int nextIndex;
	int capacity;

public:
	// stack using array
	stackUsingArray()
	{
		data=new int(4);
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
	void push(int element){
		if(nextIndex==capacity)
		{
			// whenever it is full we 
			// double the capacity
			// cout<<"Stack Overflow"<<endl;
			// return;
			int *neData= new int(2*capacity);
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
	int pop(){
		if(isEmpty())
		{
			cout<<"Stack is empty"<<endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	} 

	// find topmost element
	int top()
	{
		if(isEmpty())
		{
			cout<<"Stack is empty"<<endl;
			return INT_MIN;
		}
		return data[nextIndex - 1];
	}
};

int main(){
	stackUsingArray s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;

}