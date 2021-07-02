#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
 
struct Stack {
    int top;
    int capacity;
    int* array;
};
 
struct Stack* createStack(int capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}
 
 
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
 
 
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}
 
 
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
 
 
int compare(char &a, char &b) {
    if(a == b) {
        return 0;
    }
    return 1;
}

int main()
{
    struct Stack* stack = createStack(100);
    char str[] = "((a+b)-(c";
    char open = '(';
    char close = ')';
    int i;
    
    for (i = 0; i<sizeof(str); i++) {
        printf("%c", str[i]);
        if(compare(str[i], open)==0) {
            push(stack, 1);
        } else if(compare(str[i], close)==0) {
            pop(stack);
        }
    }
    
    if(isEmpty(stack)) {
        printf("\nBalanced");
    } else {
        printf("\nUnbalanced");
    }
 
    return 0;
}