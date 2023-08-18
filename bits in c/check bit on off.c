#include <stdio.h>
#include <math.h>

void showbits(int num);
void check_bit(unsigned char n, int b);

#define _BV(x) (1 << x);

int main()
{
    unsigned char n, k;
    int b;

    printf("what number you have check  : ");
    scanf("%d", &n);

    showbits(n);

    printf("\nwhat bit you have to check (0-7)  : ");
    scanf("%d", &b);

    check_bit(n, b);

    return 0;
}

//to check the bit on/off at defined pos
void check_bit(unsigned char n, int b)
{
    unsigned char k, j;
    j = 1 << b;

    k = n & j;

    if (k == 0)
    {
        printf("%d is off at %d bit\n", n, b);
        to_set_on(n, b);
    }
    else
    {
        printf("%d is on at %d bit\n", n, b);
        to_set_off(n, b);
    }
}

//to set the bit off at defined pos
void to_set_off(unsigned char n, int b)
{
    unsigned char j;

    j = ~_BV(b); //255 - pow(2,b)

    int k = n & j;

    printf("\nnow  %d  is become %d and is  off at %d bit\n", n, k, b);
    showbits(k);
}

//to set the bit on at defined pos
void to_set_on(unsigned char n, int b)
{
    unsigned char j;
    j = _BV(b);

    int k = n | j;

    printf("\nnow  %d  is become %d and is  on at %d bit\n", n, k, b);
    showbits(k);
}

//to show the number in binary
void showbits(int num)
{
    unsigned char andmask, k;

    printf("%d in binary : ", num);

    for (int i = 7; i >= 0; i--)
    {
        andmask = 1 << i;
        k = num & andmask;

        k == 0 ? printf("0") : printf("1");
    }
    printf("\n");
}
