#include <stdio.h>
#include <stdlib.h>

struct emp
{
    char name[50];
    int age;
    float salary;
} e;

int main()
{
    FILE *ps;
    char ch, cont = 'y';

    ps = fopen("sample binary.dat", "wb");

    if (ps == NULL)
    {
        printf("file is not opened !!");
        exit(0);
    }
    while (cont == 'y')
    {

        printf("enter name , age and salary : ");
        scanf("%s %d %f", e.name, &e.age, &e.salary);

        fwrite(&e, sizeof(e), 1, ps);

        printf("do you want to continue (y/n) ? : ");
        fflush(stdin);
        cont = getche();
        // printf("name : %s\nage : %d\nsalary:%f\n", e.name, e.age, e.salary);
    }
    fclose(ps);

    ps = fopen("sample binary.dat", "rb");
    while (fread(&e, sizeof(e), 1, ps) == 1)
    {
        printf("\nname : %s\nage : %d\nsalary:%f\n", e.name, e.age, e.salary);
    }

    return 0;
}