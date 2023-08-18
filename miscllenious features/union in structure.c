#include <stdio.h>
#include <string.h>

// struct a
// {
//     int i;
//     char c[2];
// } ;
// struct b
// {
//     int j;
//     char d[2];
// } ;
// union z
// {
//    struct a key;
//    struct b data;
// } strange;

struct info1
{
    int salary;
    char review[40];
};
struct info2
{
    int jee_rank;
    char expectaion[30];
};

union info
{
    struct info1 experienced;
    struct info2 fresher;
};

struct emp
{
    char name[20];
    int age;
    union info info;
} emp;

int main()
{
    strcpy(emp.name, "vikash");
    emp.age = 19;

    if (emp.age > 50)
    {
        emp.info.experienced.salary = 50000;
        strcpy(emp.info.experienced.review, "good");
    }
    else
    {
        emp.info.fresher.jee_rank = 840235;
        strcpy(emp.info.fresher.expectaion, "theek thak");
    }

    printf("%s\n", emp.name);
    printf("%d\n", emp.age);

    if (emp.age > 50)
    {
        printf("%d\n", emp.info.experienced.salary);
        printf("%s\n" ,  emp.info.experienced.review);
    }
    else
    {
        printf("%d\n", emp.info.fresher.jee_rank);
        printf("%s\n", emp.info.fresher.expectaion);
    };

    //volatile
    volatile float temp;
    temp = 55.33;
    printf("%f\n" , temp );
    return 0;
}

//chg in value of one will have same effect on another structure
// strange.key.i = 512;
// strange.data.j = 434;
// strange.data.d[0] = 0;
// strange.data.d[1] = 32;

//     printf("%d\n",strange.key.i );
//     printf("%d\n",strange.data.j );

//     printf("%d\n",strange.key.c[0] );
//     printf("%d\n",strange.key.c[1] );

//     printf("%d\n",strange.data.d[0] );
//     printf("%d\n",strange.data.d[1] );