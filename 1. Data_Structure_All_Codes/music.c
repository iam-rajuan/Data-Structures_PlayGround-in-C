#include<stdio.h>
#include<stdlib.h>
struct Employee{
    int id;
    char name[30];
}e[100];
int n;

//Add Employee
void add(struct Employee e[]);
//Show all Employees
void show(struct Employee e[]);
//Delete an Employee detail
void delete(struct Employee e[]);
//Search Employee
void search(struct Employee e[]);

int main(){
    printf("Enter number of Employee:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter id and name of Employee %d:\n",i+1);
        scanf("%d",&e[i].id);
        fflush(stdin);
        gets(e[i].name);
    }
    start:
    printf("-------OPERATIONS------\n");
    printf("1. Add Employee\n");
    printf("2. Search an Employee\n");
    printf("3. Show all employee\n");
    printf("4. Delete an Employee detail\n");
    printf("5. Exit Program\n");
    int input;
    scanf("%d",&input);
    switch (input)
    {
    case 1:
    add(e);
    break;

    case 2:
    search(e);
    break;

    case 3:
    show(e);
    break;

    case 4:
    delete(e);
    break;

    default:
    exit(0);
    }
    goto start;
return 0;
}

void show(struct Employee e[]){
    for(int i=0;i<n;i++){
        printf("Id : %d , Name : %s\n",e[i].id,e[i].name);
    }
}

void add(struct Employee e[]){
    printf("Enter new Employee details\n");
    scanf("%d",&e[n].id);
    fflush(stdin);
    gets(e[n].name);
    n++;
}

void delete(struct Employee e[]){
    int temp,count=0;
    printf("Enter id to be deleted:\n");
    scanf("%d",&temp);
    for(int i=0;i<n;i++){
        if(temp==e[i].id){
            temp=i;
            count++;
        }
    }
    if(count==1){
        for(int j=temp;j<n;j++){
            e[j]=e[j+1];
        }
    }
    else{
        printf("Employee don't Exist !\n");
    }
    n--;
}

void search(struct Employee e[]){
    int temp,count=0;
    printf("Enter id to be searched:\n");
    scanf("%d",&temp);
    for(int i=0;i<n;i++){
        if(temp==e[i].id){
            printf("Employee Found !\n");
            printf("Id : %d , Name : %s\n",e[i].id,e[i].name);
            count++;
        }
    }
    if(count!=1){
        printf("Employee don't Exist !\n");
    }
}

// OUTPUT

/*
Enter number of Employee:
3
Enter id and name of Employee 1:
1
Arya
Enter id and name of Employee 2:
2
Harry
Enter id and name of Employee 3:
3
Harshul

-------OPERATIONS------
1. Add Employee
2. Search an Employee
3. Show all employee
4. Delete an Employee detail
5. Exit Program
1
Enter new Employee details
4
Meet

-------OPERATIONS------
1. Add Employee
2. Search an Employee
3. Show all employee
4. Delete an Employee detail
5. Exit Program
2
Enter id to be searched:
4
Employee Found !
Id : 4 , Name : Meet

-------OPERATIONS------
1. Add Employee
2. Search an Employee
3. Show all employee
4. Delete an Employee detail
5. Exit Program
3
Id : 1 , Name : Arya
Id : 2 , Name : Harry
Id : 3 , Name : Harshul
Id : 4 , Name : Meet

-------OPERATIONS------
1. Add Employee
2. Search an Employee
3. Show all employee
4. Delete an Employee detail
5. Exit Program
4
Enter id to be deleted:
2

-------OPERATIONS------
1. Add Employee
2. Search an Employee
3. Show all employee
4. Delete an Employee detail
5. Exit Program
3
Id : 1 , Name : Arya
Id : 3 , Name : Harshul
Id : 4 , Name : Meet

-------OPERATIONS------
1. Add Employee
2. Search an Employee
3. Show all employee
4. Delete an Employee detail
5. Exit Program
5
*/
