#include<stdio.h>

int p_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d\n",a[i]);
    }
    printf("\n");
}
int s_array(int a[], int n)
{
    int temp;
    int sorted=0;
    for ( int i = 0; i <= n-1; i++)
    {
        printf("working passes: %d\n",i+1);
        printf("\n");
        sorted=1;
        // printf("%d %d\n",a [i],n);
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                sorted=0;
            }
        }
        if (sorted)
        {
            return;
        }
    }

}

int main()
{
    int n = 6;
    //int a[]= {6,5,4,3,2,1};
    int a[]= {1,2,3,4,5,6};
    p_array(a, n);
    s_array(a, n);
    p_array(a, n);

    return 0;
}
