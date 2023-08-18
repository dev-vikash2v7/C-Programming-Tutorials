#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *ptr = NULL; //null pointer
    printf("valude of null pointer : %d" , *ptr); //error will produce

    // ptr = &x;        //null points now holds address of int x.
    // printf("valude of null pointer : %d" , *ptr);

    if (ptr != NULL)
    {
        printf("address of x is %d\n", *ptr);
    }
    else
    {
        puts("the pointer is a null pointer and cannot be dereferenced.");
    }

    return 0;
}

//null pointer:
/*
*) a pointer which has a value reserved for indicating that he pointer or reference does  to a valid object .

*) a null pointer is guaranteed to compare unequal to any pointer that points to a valid object.

*)defrecing aa null pointer is undefined behaviour in c

*) gives a functionality to  prog. to check whether a pointer is legimate or not

*) it points to null (nothing)

*) it is defined as ( (void) *) 0) in header files

!! null vs void  : null pointer os a value where as void pointr is a type

!! uses of null pointer !!

*) to initialise a pointer var where a ptr var has not been assigned any valid address yet

*) to check legimative address location  by doing so we can perfom error handling

*) to pass a null pointer to func arg when we dont want to pass any valid memory address



!!
*/

