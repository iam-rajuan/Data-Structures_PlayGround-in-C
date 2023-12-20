#include <stdio.h>
#include <string.h>

#define LEN 100
#define SIZE 1000

struct Item
{
    int number;
    char Name [LEN + 1];
    int on_hand;
};

void Insert (struct Item inv[], int idx)
{
    FILE *fp;
    fp = fopen ("mystudent.txt","W");

    printf ("Put an Item Number: ");
    scanf ("%d", &inv[idx].number);
    printf ("Put an Item Name: ");
    scanf ("%s", inv[idx].Name);
    printf ("Put an Item Quantity: ");
    scanf ("%d", &inv[idx].on_hand);
    fwirte
}

int Search (struct Item inv[], int idx)
{
    int no, sidx;
    FILE *fp;
    fp = fopen ("mystudent.txt","W");
    printf ("Put the number to search: ");
    scanf ("%d", &no);

    for (int i = 0; i < idx; i++)
    {
        if (inv[i].number == no)
        {
            printf ("Name: %s, Quantity: %d\n", inv[i].Name, inv[i].on_hand);
            sidx = i;
            break;
        }
    }
    return sidx;
    fclose(fp);
}

void Update (struct Item inv[], int idx)
{

    int sid = Search (inv, idx);

    printf ("Put the quantity of new arrival: ");
    int nn;
    scanf ("%d", &nn);
    inv[sid].on_hand += nn;
}


void Print (struct Item inv[], int idx)
{
    for (int i = 0; i < idx; i++)
        printf ("Number: %d, Name: %s, Quantity: %d\n", inv[i].number, inv[i].Name, inv[i].on_hand);
}

int main ()
{
    struct Item Inv[SIZE];
    int Index = 0;

    char ch = '\0';
    do
    {
        printf ("Press i: Insert \n"
                "      p: Print \n"
                "      s: Search \n"
                "      u: Update \n"
                "      q: Quit: ");
        scanf (" %c", &ch);
        switch (ch)
        {
        case 'i':
            Insert (Inv, Index++);
            break;
        case 'p':
            Print (Inv, Index);
            break;
        case 's':
            Search (Inv, Index);
            break;
        case 'u':
            Update (Inv, Index);
            break;
        case 'q':
            break;
        default:
            printf ("Wrong option has been chosen \n");
            break;
        }

    }
    while (ch != 'q');

    return 0;
}
