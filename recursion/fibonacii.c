#include <stdio.h>

void fibonachi(int n, int a, int b)
{
    int c;
    if (n >= 1)

    {
        c = a + b;

        printf("%d\t",  c);

        a = b;
        n -= 1;

        fibonachi(n, a, c);
    }
};

int main()
{
    int n;
    printf("enter a number to obtain its factor : ");
    scanf("%d", &n);

    
    printf("fibonachi series if %d is : ",n);
    printf("\t%d\t%d\t",1,1);

        fibonachi(n - 2, 1, 1);

    return 0;
};