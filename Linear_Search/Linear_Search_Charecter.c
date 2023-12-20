#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int lsearch(char a[], char element, int size)
{
    int i;
    for (i = 0; i < size-1; i++)
    {
        if (element == a[i])
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    char arr[10], search;
    int i, n, index;
    printf("Enter the number of elements of the array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    for (i = 0; i <=n; i++)
    {
        scanf("%c", &arr[i]);
    }
    printf("Enter the element to search\n");
    scanf("%s", &search);
    printf("Your searched element is: \n %c", search);
    int size = sizeof(arr)/sizeof(arr[0]);
    index = lsearch(arr, search, n);
    if (index == -1)
    {
        printf("\nSorry!! Element not found");
    }
    else
    {
        printf("Element found at position %d", index);
    }
}
