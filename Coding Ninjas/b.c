#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include<mpi.h>
void generate_series(int,int,int);
void display(int, int);
int v[100000],n=20,a=3,b=1,c=2;
int main()
{
int i;
int id;
int p;
MPI_Init(NULL, NULL);
MPI_Comm_rank(MPI_COMM_WORLD, &id);
MPI_Comm_size(MPI_COMM_WORLD, &p);
generate_series(a,b,c);
for(i=id;i<n;i+=p)
{
display(id,i);
}
MPI_Finalize();
return 0;
}
void generate_series(int a,int b,int c)
{
for(int i=0;i<n;i++)
{
v[i]=(pow(a,i)+pow(b,i))/(pow(c,0));
}
}
void display (int id, int i)
{
printf("%dth core with %dth value of the series=",id,i);
printf("%d\n",v[i]);
}