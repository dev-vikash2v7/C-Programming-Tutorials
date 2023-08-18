#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    // printf("%d\n", &n);

    // 1. dellocation of memory
    // int *ptr = (int *)malloc(sizeof(int));

    // ptr = &n;   //or *ptr = n
    // free(ptr);  //ptr now become dangling pointer
    // ptr = NULL; //ptr no longer dangling


    // 2. returning local var in function call
    // int *func()
    // {
    //     int a = 5; //a is local var and hence go out of scope on function call
    //     return &a;
    // }
    // int *ptr2 = func();
    // printf("value of pointer : %d\n", *ptr2);


    // 3. variable going out of scope
    int *ptr3;
    {
        int i=10;
        ptr3 = &i; //pointer points to invalid location
    } //scope ends 

    //ptr is now a dangling pointer
    printf("value of pointer : %d\n", *ptr3);





    return 0;
}

/* 

dangling pointer :
    *) something which is hanging
    *) a pointer pointing to a freed memory location or the location whose content has been deleted

    *) assise during object destruction without modifying the value of pointer

cause of dangling :
    // 1. dellocation of memory : when memory is deallocated the pointer keeps pointing to freed space
    // 2. returning local var in function call
    // 3. variable going out of scope

disadvantages:
    // can introduce bugs in our prog
    // avoid issue by initialise pointer to null
*/