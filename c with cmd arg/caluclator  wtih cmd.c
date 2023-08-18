#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int no_of_arg, char *arguments[])
{


    if (no_of_arg > 1)
    {
        char *operation = arguments[1];
        

        int a =  atoi(arguments[2]);
        int b = atoi(arguments[3]);


        if (strcmp("add", operation) == 0)
        {
            printf("%d + %d = %d", a, b,(float ) (a + b));
        }
        else if (strcmp("subtract", operation) == 0)
        {
            printf("%d - %d = %d", a, b, a - b);
        }
        else if (strcmp("multiply", operation) == 0)
        {
            printf("%d * %d = %d", a, b, a * b);
        }
        else if (strcmp("divide", operation) == 0)
        {
            printf("%d / %d = %d", a, b, a / b);
        }

        else
        {
            printf("operation not valid !!\n");
        };
        puts("");
    }
    else
    {
        printf("enter operation !!!\n");
    };

    return 0;
}