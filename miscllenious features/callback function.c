#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
};

void greetHello(int (*fptr)(int, int))
{
    printf("hello user\n");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 6));
}

void greetGM(int (*fptr)(int, int))
{
    printf("good morning user\n");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 6));
}

int main()
{
    int (*ptr)(int, int);
    
    ptr = sum; //&sum

    greetHello(sum);
        greetGM(sum);

            return 0;
}

//callback function

/*
* function pointer are used o passs a function to function

* this passed funct can then be called again (hence the name callback func)

* this provides programmer to write less code to do more
*/