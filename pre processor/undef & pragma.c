#include <stdio.h>

#pragma startup fun1
#pragma exit fun2

#pragma warn -rvl
#pragma warn -par
#pragma warn -rch

void fun1(){
    printf("startup function\n");
}
void fun2(){
    printf("ending function\n");
};

#define PENTIUM "it is pentium" 

int main()
{
printf("%s" , PENTIUM );
//#undef PENTIUM //it is undefined


    return 0;
}