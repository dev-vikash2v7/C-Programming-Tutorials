#include <stdio.h>
#include <stdlib.h>

#define INTEGER 0
#define STRING 0

int reverse(data_type, data)
{
    void *temp;

    if (data_type == INTEGER)
    {
        temp = (int *)temp;
        temp = 0;
        while (n > 0)
        {
            temp += (n % 10);
            n /= 10;

            n > 0 ? temp *= 10 : NULL;
        }
        return temp;
    }
    else if (data_type == STRING)
    {
        temp = (char *)temp;
        temp = '';
    }
}
int main()
{
    int n = 54345;
    char *s = "vikash";

    // printf("%d\n" , reverse(n));

    if (n == reverse(INTEGER, n))
    {
        printf("the no. %d is  a palindrome!!\n", n);
    }
    else
    {
        printf("the no. is not a palindrome!!\n");
    };
    return 0;
}