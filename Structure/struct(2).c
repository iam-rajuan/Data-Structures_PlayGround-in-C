#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s;
    s->size = 1;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->arr[0]=4;
    s->top++;
    if(isEmpty(s)){
        printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }
        if(isFull(s)){
        printf("The stack is full%d",s->arr[0]);
    }
    else{
        printf("The stack is not Full %d",s->arr[0]);
    }
    return 0;
}
