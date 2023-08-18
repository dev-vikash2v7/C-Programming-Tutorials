//macro expansion

// #include <stdio.h>
#include "stdio.h"
#include "D:\tic_tac_toe.c" //in " " we can chose our own header file

#define PI 3.148
#define AREA(r) (PI * r * r)
#define and &&
#define or ||
// #define find 

#define FOUND(r) printf("\narea of circle with radius %d  is : %f\n" , r , AREA(r) ) ;
#define PRINT_THANK printf("thankyou !!!\n")
#define HLINE for(int i=0 ; i<10 ; i++) \ 
                printf("%d\n" , i);
int main()
{
    int r = 4;
    if (r > 1 and r < 10 or r == 0)
    {
        FOUND(r);
        PRINT_THANK;
    };

    HLINE;

    return 0;
};