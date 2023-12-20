int main()
{
    int choice,value,choice1,loc1,loc2;
    while(1)
    {
mainMenu:
        printf("\n\n****** MENU ******\n1. Insert\n2. Display\n3. Exit \nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d",&value);
            while(1)
            {
                printf("Where you want to insert: \n1. At Beginning\n2. At

                       End\nEnter your choice: ");

                       scanf("%d",&choice1);

                       switch(choice1)
            {
            case 1:
                insertAtBeginning(value);
                    break;
                case 2:
                    insertAtEnd(value);
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
