#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include<mpi.h>
void generate_tt(int);
void check_ckt(int, int);
int a[65536];
int Pow(int X, int Y) {
int power = 1, i;
for (i = 1; i <= Y; ++i) {
power = power * X;
}
return power;
}
int main()
{
int i, n=3;
int id;
int p;
MPI_Init(NULL, NULL);
MPI_Comm_rank(MPI_COMM_WORLD, &id);
MPI_Comm_size(MPI_COMM_WORLD, &p);
int m=Pow(2,n);
generate_tt(m);
for(i=id;i<m;i+=p)
{
check_ckt(id,i);
}
MPI_Finalize();
return 0;
}
void generate_tt(int m)
{
for(int i=0;i<m;i++)
{
a[i]=rand() % 2;
}
}
void check_ckt (int id, int i)
{
if(a[id]==1)
printf("%d th row satifies circuit \n",id);
}