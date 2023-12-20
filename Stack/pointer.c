#include<stdio.h>
int main()
{

int x=10;
int *y=&x;
int *z=&y;

printf("x= %d \n",x);
printf("&x= %d \n",&x);
printf("y= %d \n",y);
printf("&y= %d \n",&y);
printf("*y= %d \n",*y);
printf("z= %d \n",z);
    return 0;
}
