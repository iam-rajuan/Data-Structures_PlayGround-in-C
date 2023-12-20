#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack* ptr)
{
    if (ptr->top==-1)
    {
        return 1;
    }
    else
        return 0;

}
int isFull(struct stack* ptr)
{
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
        return 0;

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
        ptr->arr[ptr->top]=val;
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
        ptr->top--;
        return val;
    }
}
int show (struct stack* ptr)
{
    if(ptr->top>=0)
    {
        printf("\tStack element is: ");
        for(int i=0; i<=ptr->top; i++)
        {
           printf("%d\t",ptr->arr[i]);
        }
    }
    else
    {
        printf("Stack is empty!\n");
    }
}
int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    int ch,value;
    while(ch<=4)
    {
        printf("\n1.push \n");
        printf("2.pop \n");
        printf("3.show \n");
        printf("4.exit \n");
        printf("\t PRESS: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\t \t enter push element:");
            scanf("%d",&value);
            push(sp,value);
            break;
        case 2:

            printf("\t \t Poped element is: %d \n",pop(sp));
            break;
        case 3:
             show(sp);
             break;
        case 4:
            exit(0);
            break;
        default:
            printf("\t \t enterd invaild! value\n");
            break;

        }

    }
    return 0;
}
