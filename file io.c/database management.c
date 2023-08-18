//a menu driven prog for elementary database management

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct emp
{
    char name[50];
    int age;
    float salary;
} e;

int record_size = sizeof(e);

//create a record
void create_record(FILE *ps)
{
    char another = 'y';

    while (another == 'y')
    {
        printf("enter name , age and salary : ");
        scanf("%s %d %f", e.name, &e.age, &e.salary);
        fwrite(&e, record_size, 1, ps);
        printf("\nadd another record(y/n) : ");
        fflush(stdin);
        another = getche();
        printf("\n");
    }
    fclose(ps);
    printf("\nrecord created successfully!!\n");
}

void add_record(FILE *ps)
{
    char another = 'y';
    // if(fread(&e , record_size , 1 , ps) != 1){
    //     printf("no record create");
    //     exit(1);
    // }

    fseek(ps, 0, SEEK_END);

    while (another == 'y')
    {
        printf("enter name , age and salary : ");
        scanf("%s %d %f", e.name, &e.age, &e.salary);
        fwrite(&e, record_size, 1, ps);
        printf("\nadd another record(y/n) : ");
        fflush(stdin);
        another = getche();
        printf("\n");
    }
    fclose(ps);
    printf("\nrecord add successfully!!\n");
}

void display_record(FILE *ps)
{
    printf("records displayed : \n");

    while (fread(&e, record_size, 1, ps) == 1)
    {
        printf("\nname : %s\nage : %d\nsalary : %f\n", e.name, e.age, e.salary);
    }
}


//to modify record
void modify_record(FILE *ps)
{
    char emp[50];
    printf("enter name of employee to modify");
    scanf("%s", emp);

    rewind(ps);
    while (fread(&e, record_size, 1, ps) == 1)
    {
        if (strcmp(emp, e.name) == 0)
        {
            printf("\n enter modified name , age and salary : ");
            scanf("%s %d %f", e.name, &e.age, &e.salary);
            fseek(ps, -record_size, SEEK_CUR);
            fwrite(&e, record_size, 1, ps);
        }
    }
    printf("\nrecord is modified !!\n");
}


//to delete record
void delete_record(FILE *ps)
{
    FILE *ft;
    char emp[50];
    printf("enter name of employee to delete its record : ");
    scanf("%s", emp);

    rewind(ps);
    while (fread(&e, record_size, 1, ps) == 1)
    {
        if (strcmp(emp, e.name) == 0)
        {
            ft = fopen("temp data.tmp", "wb");
            fwrite(&e, record_size, 1, ft);
        }
    }
    fclose(ps);
    fclose(ft);
    remove("sample database.dat");
    rename("temp data.tmp", "sample database.dat");
    printf("\nrecord is modified !!\n");
}

int main()
{
    FILE *ps;
    char cont = 'y';
    int choice;

    ps = fopen("sample database.dat", "rb+");
    if (ps == NULL)
    {
        ps = fopen("sample database.dat", "wb+");
        if (ps == NULL)
        {
            printf("cannot open file !!");
            exit(0);
        }
    };

    printf("%d", record_size);

    while (cont == 'y')
    {
        system("cls");

        printf("enter operation number to perform : \n\n");
        // gotoxy(30, 10);
        printf("1. add a record\n");
        printf("2. display record\n");
        printf("3. modify record\n");
        printf("4. delete record\n");
        printf("5. create a record\n");
        printf("0. To Exit\n");

        printf("enter your choice no. : ");
        fflush(stdin);
        scanf("%d", &choice);
        // choice = getche();

        switch (choice)
        {
        case 1:
            ps = fopen("sample database.dat", "ab");
            add_record(ps);
            break;

        case 2:
            ps = fopen("sample database.dat", "rb");
            display_record(ps);
            break;

        case 3:
            ps = fopen("sample database.dat", "ab");
            modify_record(ps);
            break;

        case 4:
            ps = fopen("sample database.dat", "ab");
            delete_record(ps);
            break;

        case 5:
            ps = fopen("sample database.dat", "wb");
            create_record(ps);
            break;

        case 0:
            printf("thank you!!!\n");
                exit(0);

        default:
            printf("\nwrong option entered !!!\n");
            break;
        }

        // printf("do you want continue?(y/n). : ");
        // fflush(stdin);
        // cont = getche();
    fclose(ps);
    }

    printf("\nthank you !!!\n");

    return 0;
}

// in tc/tc++ use library funct gotoxy() declared in conio.h
// void gotoxy(int col, int row)
// {
//     HANDLE h Stdout = GetHandle(STD_OUTPUT_HANDLE);
//     COORD position = {col, row};
//     SetConsolePosition(hStdout, position);
// }