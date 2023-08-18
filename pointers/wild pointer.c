#include <stdio.h>
#include <stdlib.h>

int main()
{
int n = 6;
int *ptr; //this is a wild ptr
// *ptr = n; // this is not a good thing
ptr = &n ;

printf("%d\n", *ptr);

    return 0;
}

/*
wild pointer:
    //uninitialised pointer is known as wild ptr.
    // there ptr point to some arbitary location in memory  and may cause a prog to crash
    // always initialize unused ptr to null
 */