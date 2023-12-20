#include<stdio.h>
void display (int arr[], int n)
{
    for (int i= 0; i<n; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}
int insertion(int arr[],int size, int element, int index, int capacity)
{
    if (size>=capacity)
    {
        return -1;
    }

        for (int i=size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main ()
{
    int arr[100]= {1,3,6,9};
    int size=4, element=101, index=2;
    display(arr, size);
    insertion(arr, size, element, index, 100);
    size=+1;
    display(arr, size);



    return 0;

}
