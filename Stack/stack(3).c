#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 10

struct stack
{
    int items[MAX];
    int top;
};

typedef struct stack st;

int isempty(st *s)
{
    if (s->top==-1)
    {
        printf("it's empty");
    }
    else
    {
        printf("it's not empty");
    }
}


int main()
{
    st *s;
   // push(s);
    isempty(s);
    return 0;
}
