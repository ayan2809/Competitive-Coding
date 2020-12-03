#include <bits/stdc++.h> 
using namespace std;
void showStack(stack <int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" --> ";
		s.pop();
	}
	cout<<endl;
}
void solve(stack <int> &s,int k)
{
	if(k==1)
	{
		s.pop();
		return;
	}
	int temp=s.top();
	cout<<temp<<endl;
	s.pop();
	solve(s,k-1);
	showStack(s);
	s.push(temp);
	return;
	
}
void deleteMiddle(stack <int> &s)
{
	if(s.size()==0)
	 return;
	 int k= (s.size()/2)+1;
	solve(s,k);
}
void reverse2(stack<int> &s,int n)
{
	if(s.size()==0)
	{
		s.push(n);
		return;
		
	}
	int t=s.top();
	s.pop();
	reverse2(s,n);
	s.push(t);
	return;
}
void reverse(stack <int> &s)
{
	
	if(s.size()==1)
	{
		return;
	}
	int temp=s.top();
	s.pop();
	reverse(s);
	reverse2(s,temp);	
	
	return;
}
void reverseStack(stack <int> &s)
{
	if(s.size()==0)
	 return;
	reverse(s);
}

int main()
{
 stack <int> s;
 int n=0;
 while(1!=0)
 {

 cout<<"Enter 1 to push an element\n Enter 2 to pop an element \n Enter 3 to display the stack \n Enter 4 to delete middle element using recursion \n Enter 5 to reverse the stack \n Enter 6 to break out "<<endl;
 int m=0;
 cout<<"Enter Your Choice :";
 cin>>m;
 if(m==6)
 break;
 
 switch(m){
 	case 1:
 		cout<<"Enter the element :";
 		cin>>n;
 		s.push(n);
 		break;
 	case 2: 
 		s.pop();
 		cout<<"Now the stack is :";
 		showStack(s);
 		break;
 	case 3:
 		showStack(s);
 		cout<<"Size of stack is :"<<(s.size()/2)+1<<endl;
 		//cout<<"Hello World"<<endl;
 		break;
 		
 	case 4: 
 		deleteMiddle(s);
 		break;
 	case 5:
 		reverseStack(s);
 }
  }	
}
