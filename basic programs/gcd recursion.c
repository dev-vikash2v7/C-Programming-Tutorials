#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y)
{
    int max = x > y ? x : y;

    int max_gcd = 0;

    for (int i = 2; i <= (max / 2); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            max_gcd = i;
        }
    }
    return max_gcd ; 
}

int main()
{
    int x = 9, y = 18;
    printf("gcd between %d and %d is %d\n", x, y, gcd(x, y));

    return 0;
}