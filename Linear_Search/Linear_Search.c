#include<stdio.h>
int linearSearch(int arr[],int size, int element)
{
    for (int i=0; i<=size-1; i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
        return -1;
    }
}

int main()
{
    int arr[100],n,i,size,element;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array element is: ");
    for(i=0; i<n; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
    size=sizeof(arr)/sizeof(arr[0]);
    printf("\n%d",size);
    printf("Enter Search Element: ");
    scanf("%d",&element);

    int x=linearSearch(arr,size,element);
    printf("%d",x);

    return 0;
}
