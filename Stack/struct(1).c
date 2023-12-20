#include<stdio.h>
struct stack
{
    int size;
    int top;
    //int *arr;
};
int main()
{
struct stack *p,s;
p=&s;
p->size=3;
p->top=4;
printf("%d\n",p->size);
printf("%d",p->top);


    return 0;
}

