#include<stdio.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack* ptr)
{
    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}





int push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack is overflow!\n");
    }
    else
    {
        ptr->top++;
        ptr->top=ptr->arr[val];
    }
}
void push(struct stack* ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}



int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack is underflow!");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        //ptr->top=ptr->arr[val];
        ptr->top--;
        return val;
    }
}
int pop(struct stack* ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    printf("before %d\n",isEmpty(sp));
    printf("before %d\n",isFull(sp));
    push(sp,11);
    push(sp,12);
    printf("after %d\n",isEmpty(sp));
    printf("after %d\n",isFull(sp));
    //pop(sp);
    //printf("poped %d",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    return 0;
}
