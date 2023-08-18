/* 
*** memory layout in c
1.code => text segment
2.global & static var =>all  variables declared whether it is initialised or uninisialised.
            two type data => 1.data (initialised)            2.bss(uninitialised)

3.stack =>  list of all the storage(variables) in LIFO manner and 
            initially some memory will be reserved for main() in the stack. this is also called as the stack frame of main().

** stack overflow =>
        => copiler allocates some space for the stack part of the memory
        => whe this space gets exhasusted for some bad reason , the situation is called as stack overflow
        => ex  : in infinite while loop or in recursion without exiting condition it cause error
         
4.heap => create when dynamically memory allocated .
        can use to allocate memory during runtime

** use of heap=>
        => there are a lot of limitaions of stack (staic memory location)
        => ex : variable sized array , freeing memory no longer required etc.
        => heap can be used flexibly by the programmer as per his needs.
        => we can create a pointer in our main fun and point to a memory block in the heap 
        => the address is stored by the local var in the main fun
        => the memory consumed will not get freed automatically in case we overwrite the pointer
*/

#include <stdio.h>

int main()
{

    // printf();

    return 0;
}


