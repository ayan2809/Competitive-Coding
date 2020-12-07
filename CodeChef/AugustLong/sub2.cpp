
#include <stdio.h>
#include<math.h> 
#include <iostream> 
using namespace std; 
int findCount(int n, int sum) { 
		
		//in case n = 2 start is 10 and end is (100-1) = 99 
		int start = pow(10, n-1); 
		int end = pow(10, n)-1; 
	
		int count = 0; 
		int i = start; 
		
				while(i <= end) { 
			
			int cur = 0; 
			int temp = i; 
			
			while( temp != 0) { 
				cur += temp % 10; 
				temp = temp / 10; 
			} 
			
			if(cur == sum) {			 
				count++;			 
				i += 9;		 
			}else
				i++; 
			
		}	 
			return count; 

		
	} 
int main() { 
		ios_base::sync_with_stdio(false); 
    	cin.tie(NULL); 
		long long int T,PC,PR;
		cin>>T;
		for(int i=0;i<T;i++)
		{
			cin>>PC>>PR;
			if(PC<10 && PR <10)
			cout<<"1 1"<<endl;
			else
			{
				int a=1,c=0,d=0;
				while(1!=0){
				c=findCount(a,PC);
				d=findCount(a,PR);
				if(c==0 && d!=0)
				{
				cout<<"1 "<<a<<endl;
				break;
				}
				else if(d==0 && c!=0)
				{
				cout<<"0 "<<a<<endl;
				break;
				}
				else if(d!=0 && c!=0)
				{
				cout<<"1 "<<a<<endl;
				break;
				}
				a+=1;
			 }	 
	}
}
	
	return 0; 
} 

