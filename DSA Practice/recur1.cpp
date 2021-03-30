#include<bits/stdc++.h>
using namespace std;
void fun1(int n)
{
	if(n>0)
	{
		
		cout<<n<<endl;
		fun1(n-1);

	}

}
int main()
{
	int n=0;
	cin>>n;
	fun1(n);
}