#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

// Global Variables
int i = 0;

// Structure
struct patient
{
    char first_name[20];
    char last_name[20];
    char age[3];
    char gender;
    char address[30];
    char phone[15];
    char problem[50];
    char doctor[20];
} patientInfo[50];

// Functions
int login();
int main_menu();
int add_record();
int view_record();
int search_record();
int update_record();
int delete_record();

// Main Function
int main()
{
    int choice;
    printf("\n\t\t\t--------------------------------------\n");
    printf("\t\t\t       Welcome to FM HOSPITAL       \n");
    printf("\t\t\t       1. Login\n");
    printf("\t\t\t       2. Exit \n");
    printf("\t\t\t--------------------------------------\n");
    scanf("%d", &choice);
    if(choice==1)
    {
        login();
    }
    else if(choice==2)
    {
        printf("Thank You!");
        exit(0);
    }
    else
    {
        printf("\n Invalid Input. ");
    }
    return 0;
}

// login function is Used to login into the main_menu function
int login()
{
    system("cls");
    char username[20];
    char password[20];

    printf("\t\t\t--------------------------------------\n");
    printf("\n\t\t\tEnter Your Username and Password\n\n\n");
    fflush(stdin);
    printf("\t\t\tEnter Your Username : ");
    gets(username);
    fflush(stdin);

    if (strcmp(username, "f") == 0)
    {
        printf("\n\t\t\tEnter Your Password : ");
        gets(password);

        if(strcmp(password, "2") == 0)
        {
            printf("\n\n\t\t\tLogin Successful. \n\n");
            main_menu();
        }


        else
        {
            printf("\n\t\t\tIncorrect Password. Press Any Key to Try Again.\n");
            getch();
            login();
        }

    }
    else
    {
        printf("\n\t\t\tIncorrect Username. Press Any Key to Try Again.\n");
        getch();
        login();
    }
}

// main_menu function is used to display the services provided by the hospital
int main_menu()
{
    system("cls");
    int choice;

    printf("\t\t\t--------------------------------------\n");
    printf("\n\t\t\t1. Add Patients Record\n\n");
    printf("\t\t\t2. View Patients Record\n\n");
    printf("\t\t\t3. Search Patients Record\n\n");
    printf("\t\t\t4. Update Patients Record\n\n");
    printf("\t\t\t5. Remove Patients Record\n\n");
    printf("\t\t\t6. Exit\n\n\n");

    printf("\t\t\tEnter Your Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        add_record();
        break;

    case 2:
        view_record();
        break;

    case 3:
        search_record();
        break;

    case 4:
        update_record();
        break;

    case 5:
        delete_record();
        break;

    case 6:
        printf("\n\t\t\tThank You. Visit Us Next Time.");
        exit(0);
        break;

    default:
        printf("\n\n\t\t\tInvalid Input. Please Try Again");
        break;
    }
}

// add_record is to add new patients record
int add_record()
{
    system("cls");
    printf("\n\t\t\t!!!!!!!!!!!Add Patient Records!!!!!!!!!!!!!!!\n");
    fflush(stdin);
    printf("Enter Your First Name: ");
    gets(patientInfo[i].first_name);
    fflush(stdin);
    printf("Enter Your Last Name: ");
    gets(patientInfo[i].last_name);
    fflush(stdin);
    printf("Enter Your Gender(M/F): ");
    scanf("%c", &patientInfo[i].gender);
    fflush(stdin);
    printf("Enter Your Age: ");
    gets(patientInfo[i].age);
    fflush(stdin);
    printf("Enter Your Phone Number: ");
    gets(patientInfo[i].phone);
    fflush(stdin);
    printf("Enter Your Address: ");
    gets(patientInfo[i].address);
    fflush(stdin);
    printf("Enter Your Problems: ");
    gets(patientInfo[i].problem);
    fflush(stdin);
    printf("Enter the doctor you want to visit: ");
    gets(patientInfo[i].doctor);
    i++;

    printf("\n\t\t\t   Thank You. Press Any Key to Continue ");
    getch();
    main_menu();
}

// view_record function is used to view the total patients record
int view_record()
{
    system("cls");
    printf("\n\t\t\t View Full Patients List: \n\n\n");

    for (int j = 0; j<i; j++)
    {
        printf("Patients Name: %s %s ", patientInfo[j].first_name, patientInfo[j].last_name);
        printf("Patients Gender(M/F): %c ", patientInfo[j].gender);
        printf("Patients Age: %s ", patientInfo[j].age);
        printf("Patients Phone: %s ", patientInfo[j].phone);
        printf("Patients Address: %s ", patientInfo[j].address);
        printf("Patients Problems: %s ", patientInfo[j].problem);
        printf("Apointment Doctor: %s \n", patientInfo[j].doctor);
    }

    printf("\n\n\t\t\tPress Any Key to Go Back to the Main Menu");
    getch();
    main_menu();
}

// search_record to search the records by name
int search_record()
{
    system("cls");
    char phn[20];
    printf("Enter the phone number of the patient: ");
    fflush(stdin);
    gets(phn);
    for(int j=0; j<i; j++)
    {
        if(strcmp(phn, patientInfo[j].phone) == 0)
        {
            printf("----------Details of the Patients--------\n");
            printf("\nPatients Name: %s %s\n", patientInfo[j].first_name, patientInfo[j].last_name);
            printf("Patients Gender(M/F): %c\n", patientInfo[j].gender);
            printf("Patients Age: %s\n", patientInfo[j].age);
            printf("Patients Address: %s\n", patientInfo[j].address);
            printf("Patients Problems: %s\n", patientInfo[j].problem);
            printf("Apointment Doctor: %s\n", patientInfo[j].doctor);
        }
        break;
    }
    printf("\n\n\t\t\tPress Any Key to Go Back to the Main Menu");
    getch();
    main_menu();
}

// update_record function to update the existing data
int update_record()
{
    system("cls");
    printf("\n\t\t\t!!!!!!!!!!!Update Patients Record!!!!!!!!!!!!!!!!!\n");

    char phn[20];
    printf("Enter the phone number of the patient: ");
    fflush(stdin);
    gets(phn);

    for(int j=0; j<i; j++)
    {
        if(strcmp(phn, patientInfo[j].phone) == 0)
        {
            printf("\n\t\t\t!!!!!!!!!!!!Update Patient Records!!!!!!!!!!!!!!!!!!\n");
            printf("1.Enter new firstname: \n2.Enter new last name\n3.Enter new gender\n4.Enter new age\n5.Enter new Phone Number\n6.Enter new address\n7.Enter new probem\n8.Enter new doctor name\n\n");

            int z;
            scanf("%d", &z);
            fflush(stdin);

            switch (z)
            {
            case 1:
                printf("Update Your First Name: ");
                gets(patientInfo[j].first_name);
                break;
            case 2:
                printf("Update Your Last Name: ");
                gets(patientInfo[j].last_name);
                break;
            case 3:
                printf("Update Your Gender(M/F): ");
                scanf("%c", &patientInfo[j].gender);
                break;
            case 4:
                printf("Update Your Age: ");
                gets(patientInfo[j].age);
                break;
            case 5:
                printf("Update Your Phone Number: ");
                gets(patientInfo[j].phone);
                break;
            case 6:
                printf("Update Your Address: ");
                gets(patientInfo[j].address);
                break;
            case 7:
                printf("Update Your Problems: ");
                gets(patientInfo[j].problem);
                break;
            case 8:
                printf("Update the doctor you want to visit: ");
                gets(patientInfo[j].doctor);
                break;
            }
            printf("Deatils are updated");
        }
    }
    printf("\n\t\t\tPress Any Key to Go Back to the Main Menu");
    getch();
    main_menu();
}

int delete_record()
{
    system("cls");
    printf("\n\t\t\t!!!!!!!!!!!!!!!Remove Patients Record!!!!!!!!!!!!!!!!!!!\n");

    char phn[20];
    printf("Enter the phone number of the patient: ");
    fflush(stdin);
    gets(phn);

    for(int j=0; j<i; j++)
    {
        if(strcmp(phn, patientInfo[j].phone) == 0)
        {
            for(int k=0; k<i-1; k++)
            {
                patientInfo[k] = patientInfo[k+1];
            }
            i--;
        }
    }
    printf("\n\nThe details are deleted");


    printf("\n\t\t\tPress Any Key to Go Back to the Main Menu");
    getch();
    main_menu();

}
