#include <stdio.h>

int f = 0;

int factor(int n, int i)
{
    if (i < n)
    {
        if (n % i == 0)
        {
            printf("%d is a factor of %d\n", i, n);
            f = 1;
        }
        i++;
        factor(n, i);
    }
    else
    {
        if (!f)
        {
            printf("no factor found for %d therefor it is prime number !!!!\n", n);
        }
        return 1;
    }
};

int main()
{
    int n;
    printf("enter a number to obtain its factor : ");
    scanf("%d", &n);

    factor(n, 2);

    return 0;
};