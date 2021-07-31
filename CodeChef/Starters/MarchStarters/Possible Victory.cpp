#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,o=0,c=0;
	cin>>n>>o>>c;
	double rate=(double)c/(double)o;
	double score=rate*(20-o);
	score+=c;
	if(score>n)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}