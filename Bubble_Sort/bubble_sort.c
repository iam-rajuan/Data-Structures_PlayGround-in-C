#include<stdio.h>
int f_array (int a[], int n)
{
    for ( int i = 0; i < 6; i++)
      printf("print the array: %d %d\n",a [i],n);
}
int main()
{
 int  i;
 int n = 6;
   int a[5]={6,5,4,3,2,1};
  // for ( int i = 0; i < 6; i++)
  //     printf("print the array: %d\n",a [i]);
  f_array(a , n);


  return 0;
}
