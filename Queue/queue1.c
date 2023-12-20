#include <stdio.h>
#define SIZE 8

int items[SIZE];
int front = -1, rear = -1;
int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
    return 0;
}
int isempty()
{
    if (front == -1) return 1;
    return 0;
}
void enqueue(int element)
{
    if (isFull())     printf("\n Queue is full \n");
    else
    {
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        printf("\n Inserted : %d", element);
    }
}
int dequeue()
{
    int element;
    if (isempty())
    {
        printf("\n Queue is empty  \n");
        return (-1);
    }
    else
    {
        element = items[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
        printf("\n Deleted element : %d \n", element);
        return (element);
    }
}
void display()
{
    int i;
    if (isempty())     printf(" \n Empty Queue\n");
    else
    {
        printf("\n Front -> %d ", front);
        printf("\n Items -> ");
        for (i = front; i != rear; i = (i + 1) % SIZE)
        {
            printf("%d ", items[i]);
        }
        printf("%d ", items[i]);
        printf("\n Rear : %d \n", rear);
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    display();
    enqueue(10);
    display();
    return 0;
}

