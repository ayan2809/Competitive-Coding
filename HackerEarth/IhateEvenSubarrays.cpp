#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		
		string s;
		cin>>s;
		stack <char> st;
		for(char c : s)
		{	//cout<<c;
				if(!st.empty())
				{
					if(c==st.top())
					{
						st.pop();
					}
					else
					{
						st.push(c);
					}
				}
				else
				{
					st.push(c);
				}
		}
		if(st.empty())

		cout << "KHALI" << endl;

		else{

		string aux;

		while(!st.empty()){

		aux.insert(0,sizeof(char), st.top());

		st.pop();

		}
		cout<<aux<<endl;

}

}}