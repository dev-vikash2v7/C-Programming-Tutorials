#include <stdio.h>
#include <stdlib.h>

#define Male 0;
#define FeMale 0;

#define Single 0;
#define Married 1;
#define Divorced 2;
#define widowed 3;

typedef unsigned ui; //size is 4

struct emp{
    ui gender : 1; //m or f
    ui mar_sta : 2 ; // s , m , d ,w
    ui hobby : 3 ; // store 6 values
    ui scheme : 4;  //store 8 values
}e;

int main()
{
    e.gender = Male;
    e.mar_sta  = Divorced;
    e.hobby = 6; //only store 0-7 values else store 0
    e.scheme = 9; //only store 0-9 values else store 0

    printf("gender : %d\n" , e.gender);
    printf("mar_sta : %d\n" , e.mar_sta);
    printf("hobby: %d\n" , e.hobby);
    printf("size occupied : %d\n" , sizeof(e) );
    return 0;
}

//if var take only two values 0/1 we really need only 1 bit to store it
//if var take only two values 0/1/2/3 we really need only 2 bit to store it
//if var take only two values 0/1/2/3/4/5 we really need only 3 bit to store it
//if var take only two values 0/1/2/3/4/5/6/7 we really need only 4 bit to store it

