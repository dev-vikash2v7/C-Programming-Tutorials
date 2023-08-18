#include <stdio.h>

int sum_digit(int n)
{
    int remainder, sum;

    if (n > 0)
    {
        remainder = n % 10;
        n /= 10;
        sum = remainder + sum_digit(n);
    }
    else
    {
        return 0;
    }
    return sum;
};

int main()
{
    int n;
    printf("enter a number to its digit sum : ");
    scanf("%d", &n);

    printf("\ndigit sum of %d = %d",n, sum_digit(n));


    return 0;
};