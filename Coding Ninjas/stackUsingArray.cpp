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
	stackUsingArray(int totalSize)
	{
		data=new int(totalSize);
		nextIndex=0;
		capacity=totalSize;
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
			cout<<"Stack Overflow"<<endl;
			return;
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
	stackUsingArray s(3);
	s.push(1);
	s.push(2);
	cout<<s.pop()<<endl;
	s.push(2);

	s.push(3);

	s.push(4);
	cout<<s.top()<<endl;


}