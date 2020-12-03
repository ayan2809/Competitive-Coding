#include <bits/stdc++.h> 

using namespace std;
void insert(stack <int> &a,int temp)
{
	if(a.size()==0 || a.top()<=temp)
	{
		a.push(temp);
		return ;
	}
	int val=a.top();
	a.pop();
	insert(a,temp);
	a.push(val);
	
	return ;
}
void sorty(stack <int> &a)
{
	if(a.size()==1)
	return;
	int temp=a.top();
	a.pop();
	sorty(a);
	insert(a,temp);

	
}
void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 
int main()
{
	int n=0;
	cout<<"Enter the length of the stack :";
	cin>>n;
	int m=0;
	stack <int> a;
	cout<<"Enter the stack elements "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		a.push( m);
	}
	sorty(a);
	showstack(a);
	
}
