#include <stdio.h>
#include <stdarg.h>
#define I 1
#define C 2
#define F 3


//3 function to use
// va_start : used to initialise a pointer to the beginning of the list of optional arg.  (initialise)
// va_arg : advance the pointer to the next arg. (increment)
// va_list : ptr type 

void display(int data_type, int len, ...)
{
    int i;

    va_list ptr;
    va_start(ptr, len);

    switch (data_type)
    {
    case I:
        printf("\nlist of int\n");

        for (i = 1; i <= len; i++)
        {
            int n = va_arg(ptr, int);
            printf("%d ", n);
        }
        break;

    case C:
        printf("\nlist of char\n");
        for (i = 1; i <= len; i++)
        {
            char c = va_arg(ptr, char);
            printf("%c ", c);
        }
        break;

    case F:
        printf("\nlist of floats\n");
        for (i = 1; i <= len; i++)
        {
            float f = (float)va_arg(ptr, double);
            printf("%.4f ", f);
        }
        break;

    default:
        printf("error\n");

        break;
    }
    printf("\n");
};



int findmax(int n, ...)
{
    int max, i, num;

    va_list ptr;

    va_start(ptr, n);

    max = va_arg(ptr, int); //max = 2

    for (i = 1; i < n; i++)
    {
        num = va_arg(ptr, int);

        if (num > max)
            max = num;
    }

    return max;
}

int main()
{
    display(I, 3, 11, 32, 43);
    display(C, 3, 'a' , 'b' , 'c');
    display(F, 4, 1.1, 8.7, 9.3, 1.11);


    //     int max , n;
    // printf("enter no of elements : ");
    // scanf("%d"  , &n);

    // max = findmax(n, 2, 44, 32, 44, 56,6);
    // printf("max : %d", max);

    return 0;
}