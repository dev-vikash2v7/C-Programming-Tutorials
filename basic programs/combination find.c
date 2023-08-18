#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
};

//by recurion
int combination(int n,const int end )
{
    if (end == n)
    {
        return n;
    }
    return n * combination(n - 1  , end); // 5 * 4
}

int main()
{
    int n = 7 , r = 3;

    int result = combination(n, n-r+1) / factorial(r);
    printf("result : %d\n", result);

    return 0;
}