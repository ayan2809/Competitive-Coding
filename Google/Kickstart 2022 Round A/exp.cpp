#include<bits/stdc++.h>
int fun(int a, int*ab, int **abc)
{
	int y, z;
	**abc+=1;
	z=**abc;
	*ab+=2;
	y=*ab;
	a+=3;
	return a+y+z;

}
int main()
{
	static int i;
	for(++i;++i;++i)
	{
		printf("%d",i);
		if(i==4)
			break;

	}
	return 0;
}