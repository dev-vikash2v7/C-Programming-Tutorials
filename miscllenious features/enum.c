#include <stdio.h>
#include <string.h>

//without enum use
#define A 0
#define B 1
#define C 2


//with enum use
enum rating
{
    //0      1      2
    topper,
    avg,
    point5
};


struct student
{
    char name[10];
    int class;
    enum rating rating;
    int grade;
} std[2];

int main()
{
    char name[2][10] = {  "vikash"  , "shivam" };
    char class[2] = {  11 , 12 } ;

    strcpy(std[0].name , name[0] );
    std[0].class = class[0] ;
    std[0].rating = topper; //0
    std[0].grade = A; //3

    strcpy(std[1].name , name[1] );
    std[1].class = class[1] ;
    std[1].rating = point5; //3
    std[1].grade = C; //3

    for(int i =0;i<2;i++){


    printf("name : %s\nclass: %d\n" , std[i].name , std[i].class);

    switch (std[i].rating)
    {
    case topper:
        puts("he is a topper");
        break;
    case avg:
        puts("he is a averager");
        break;
    case point5:
        puts("he is a 0.5\n");
        break;
    default:
        break;
    }

    switch (std[i].grade)
    {
    case 0:
        puts("he is a A+");
        break;
    case 1:
        puts("he is a B+");
        break;
    case 2:
        puts("he is a C+");
        break;
    default:
        break;
    }
    puts("");

    };
    return 0;
}