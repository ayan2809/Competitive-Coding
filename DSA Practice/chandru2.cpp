#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num,x=0;
	cin>>num>>x;
	int house_number[num];
	int position[num];
	
	for(int i =0; i<num; i++)
	{
		cin>>house_number[i]; 
		cin>>position[i];
	}
	
	int copy_position[num];
	for(int i=0; i<num; i++)
	{
	copy_position[i] = position[i]; 
	}
	sort(copy_position, copy_position+num); 
	int temp;
	int x1, x2;
	int position1, position2;
	int maxi =0;
	for(int i=0; i<num-1; i++)
	{
		int temp = abs(copy_position[i+1]-copy_position[i]); 
		if(temp > maxi)
		{
			maxi = temp; 
			x1 = copy_position[i]; 
			x2 = copy_position[i+1];
		}
	}
	for(int i=0; i<num; i++) 
	{
		if(x1 == position[i])
		{
			position1 = i;
		}
		else if (x2 == position[i])
		{
			position2 = i;
		}
	}
	if(house_number[position1]>house_number[position2]) 
	{
		cout<<house_number[position2]<<" "<<house_number[position1]<<endl;
	}
	else
	{
		cout<<house_number[position1]<<" "<<house_number[position2]<<endl;
		
	}
	return 0;
}
