#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int empty(struct stack* ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    int full(struct stack* ptr)
    {
        if (ptr->top ==  p->size-1)
        {
            return 1;
        }
        {
            return 0;
        }
    }
    int main()
    {
        struct stack *p;
        p->size=50;
        p->top=-1;
        p->arr=(int*)malloc(p->size * sizeof(int));
        if (empty(p))
        {
            printf("empty(p)");
        }
        else
        {
            printf("full(p)");
        }
        return 0;
    }
