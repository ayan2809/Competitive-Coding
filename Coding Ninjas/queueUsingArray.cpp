#include<bits/stdc++.h>
#include "queueUsingArray.h"
using namespace std;
int main()
{
	queueUsingArray <string> q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	cout<<q.front()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
}