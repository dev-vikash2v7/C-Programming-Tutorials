#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    float b = 6.4;
    char c = 'v';
    void *ptr;

    ptr = &a;
    printf("int void ptr : %d\n", *((int *)ptr));  // cannot be defrenced directly as *ptr it has to typecast the void pointer

    ptr = &b;
    printf("float void ptr : %.2f\n", *((float *)ptr));

    ptr = &c;
    printf("char void ptr : %c\n", *((char *)ptr));

    return 0;
}

/* 
*) it is a general purpose pointer variable 
*) it has no data type associate with it
*)can be easily typecasted to other

*) cannot be defrenced directyly . first typecast them

*) pointer arithmetic is not possible

*)

uses:

*) in dynamic memory allocation. malloc() and calloc() return (void *) type pointer

*) this allows dynamic mem func. to be used tp allocate  memory  of any data type. because they typecasted  to any pointer type


*/