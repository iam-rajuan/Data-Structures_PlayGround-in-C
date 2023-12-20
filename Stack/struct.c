#include<stdio.h>
struct stack
{
    int size;
    int top;
    //int *arr;
};
int main()
{
struct stack s[10];
s[1].size=1;
s[2].top=2;
printf("%d\n",s[1].size);
printf("%d",s[2].top);


    return 0;
}
