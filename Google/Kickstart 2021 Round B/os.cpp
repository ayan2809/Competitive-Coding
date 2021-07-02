#include<stdio.h>
#include<time.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    time_t t;   // not a primitive datatype
    time(&t);

    char ch[]="This program has been writeen at (date and time):"+ctime(&t);
    printf("%s",ch);
    
    
    return 0;
}