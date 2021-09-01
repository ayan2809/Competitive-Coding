#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
class BILL
{
	public:
		int quantity;
		int price;
		int total;
		string item;
	BILL()
	{
		quantity=0;
		price=0;
		total=0;
		item="";
	}
	void input()
	{
		cout<<"Enter the item :";
		cin>>this.item;
		cout<<"Enter the price :";
		cin>>this.price;
		cout<<"Enter the quantity :";
		cin>>this.quantity;
	}
	void calculate()
	{
		total=quantity*price;
	}
	void display()
	{
		cout<<"Item Name : "<<this.item<<endl;
		cout<<"Total Quantity : "<<this.quantity<<endl;
		cout<<"Bill Amount : "<<this.total<<endl;
	}
	friend BILL operator + (BILL const &, BILL const &);
	

}; 
BILL operator + (BILL const &c1, BILL const &c2)
{
     	return BILL(c1.total + c2.total);
}



int main(){
	IOS;
	BILL ob1 = new BILL();
	BILL ob2 = new BILL();
	//taking input for both the objects
	ob1.input();
	ob2.input();
	
	ob1.calculate();
	ob2.calculate();

	ob1.display();
	ob2.display();
	
	if(ob1.item==ob2.item)
	{
		cout<<"The total of both is :"<<ob1+ob2<<endl;
	}



}