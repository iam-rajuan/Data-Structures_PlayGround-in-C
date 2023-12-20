#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;

void insertBeg(int value)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof (struct node));
    newNode->data=value;
    if (head== NULL)
    {
        newNode ->next = head;
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    printf("\nOne node inserted!!!\n");
}

void insertEnd(int value)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    printf("\nOne node inserted!!!\n");
}
void display()
{
    if(head == NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        struct node *temp = head;
        printf("\n\n  List elements are \n");
        while(temp->next != NULL)
        {
            printf("%d −−>",temp->data);
            temp = temp->next;
        }
        printf("%d −->NULL",temp->data);
    }
}

int main()
{
    int choice,value,choice1,loc1,loc2;
    while(1)
    {
mainMenu:
        printf("\n\nMENU \n1. Insert\n2. Display\n3. Exit \nEnter your choice: ");
               scanf("%d",&choice);
               switch(choice)
    {
    case 1:
        printf("Enter the value to be insert: ");
            scanf("%d",&value);
            while(1)
            {
                printf("Where you want to insert: \n1. At Beginning\n2. At End\nEnter your choice: ");

                       scanf("%d",&choice1);

                       switch(choice1)
            {
            case 1:
                insertBeg(value);
                    break;
                case 2:
                    insertEnd(value);
                    break;
                default:
                    printf("\nWrong Input!! Try again!!!\n\n");
                    goto mainMenu;
                }
                goto subMenuEnd;
            }
subMenuEnd:
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            printf("\nWrong input!!! Try again!!\n\n");
        }
    }
    return 0;
}
