#include <stdio.h>
#include <stdlib.h>
typedef struct linklist
{
    int data;
    struct linklist *next;
} node;
int l=0;
int main()
{
    node *head=NULL,*temp,*temp1;
    int len,choice,count=0,key;
    do
    {
        temp=(node *)malloc(sizeof(node));
        if(temp!=NULL)
        {
            printf("enter the elements in a list : ");
                   scanf("%d",&temp->data);
                   temp->next=NULL;
                   if(head==NULL)
        {
            head=temp;
        }
        else
        {
            temp1=head;
            while(temp1->next!=NULL)
                {
                    temp1=temp1->next;
                }
                temp1->next=temp;
            }
        }
        else
        {
            printf("Memory is full");
        }
        printf("press 1 to enter data into list: ");
               scanf("%d",&choice);
    }
    while(choice==1);
    len=length(head);
    printf("The list has %d no of nodes",l);
    return 0;
}
//recursive function to find length
int length(node *temp)
{
    if(temp==NULL)
        return l;
    else
    {
        l=l+1;
        length(temp->next);
    }
}
