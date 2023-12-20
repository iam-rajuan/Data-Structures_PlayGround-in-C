#include<stdio.h>


int main()
{
    int a[100],i,x,n;
    printf("Enter the Numbers of Elements: ");
    scanf("%d",&n);

    printf("Enter Elements of array: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search element: ");
    scanf("%d",&x);
    for(i=0;i<n;++i)
    {
        if(a[i]==x)
            break;
    }
    if(i<n)
    {
        printf("Elements are found: %d",i);
    }
    else
    {
        printf("Elements are not found");
    }
    return 0;
}
