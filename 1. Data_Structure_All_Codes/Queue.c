#include <stdio.h>
#include<stdlib.h>
#define size 5
int a[size],i,j,front=-1,rear=-1;

void enqueue(int value)
{
    if(rear==size-1)
        printf( "Queue is full.\n");
    else
    {
        if (rear+1==front)
            printf( "Queue is full.\n");
        else
        {
            front=0;
            rear++;
            a[rear]=value;
            printf("Inserted element: %d\n",a[rear]);
        }
    }
}

void dequeue()
{
    if(front==-1)
    {
        printf("No element to delete.\n");
    }
    else
    {
        printf("Deleted element: %d\n",a[front]);
        front=front+1;
        if(front>rear)
            front=rear=-1;
    }
}

void display()
{
    if(rear==-1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Elements in the queue: ");
        for(int i=front; i<=rear; i++)
        {
            printf("%d ",a[i]);
        }
    }
}
int main(int argc, char const *argv[])
{
    int ch,val;
    do
    {
        printf("\nMenu");
        printf("\n1. ENQUEUE");
        printf("\n2. DEQUEUE ");
        printf("\n3. DISPLAY QUEUE");
        printf("\n4. Exit");
        printf("\nEnter your choice 1 to 4=");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to be inserted=");
            scanf("%d",&val);
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Invalid choice!");
            break;
        }

    }
    while (ch<=3);

    return 0;
}
