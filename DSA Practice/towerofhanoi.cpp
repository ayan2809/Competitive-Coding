#include<bits/stdc++.h>
using namespace std;
void toh(int n,int a,int b,int c)
{
	toh(n-1,a,c,b);
	cout<<"From "<<a<<" to "<<c<<endl;
	toh(n-1,b,a,c);
}
int main()
{
	toh(3,1,2,3);
}