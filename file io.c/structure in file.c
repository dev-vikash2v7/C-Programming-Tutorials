//writes records to a file using structure.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp
{
    char name[40];
    int age;
    float salary;
} e;

int write(struct emp e, FILE *fp)
{
    char another = 'y';

    puts("enter few lines of text :\n");

    while (another == 'y')
    {
        printf("\nenter your name , age and salary : ");
        scanf("%s %d %f", e.name, &e.age, &e.salary);

        fprintf(fp, "%s %d %f\n", e.name, e.age, e.salary); // to save in file

        printf("name  = %s\nage=%d\nsalary=%f\n", e.name, e.age, e.salary); //to display

        printf("enter another record ?? (Y?N) : ");

        fflush(stdin);
        another = getche();
    };
    return 0;
};

int display(struct emp e, FILE *fp)
{
    while (fscanf(fp, "%s %d %f", e.name, &e.age, &e.salary) != EOF) // to scan from file
    {
        printf("name  = %s\nage=%d\nsalary=%f\n\n", e.name, e.age, e.salary);
    };
    return 0;
};

int main()
{

    FILE *fp;
    int operation = 2;

    // printf("what operation do you want :\n1>writing\n2>reading");
    // scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        fp = fopen("emp data.dat", "w");

        if (fp == NULL)
        {
            printf("file does not exist !!");
            exit(1);
        };
        write(e, fp);
        break;

    case 2:
        fp = fopen("emp data.dat", "r");
        if (fp == NULL)
        {
            printf("file does not exist !!");
            exit(2);
        };
        display(e, fp);

        break;

    default:
        printf("invalid option !!!\n");
        break;
    }

    fclose(fp);

    return 0;
};
