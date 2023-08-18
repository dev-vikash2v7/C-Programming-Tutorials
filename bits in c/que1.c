/*cons an unsigned int in which rightmost bit is numbered as 0. write a func checkbits(x,p,n) wjocj returns tre if all "n" bits starting  from pos "p" are tru==urned on,fals e==e othe =sise . for exa checkbetsi=Ix,54O will return true if bits 4,3 and 2 are in number x.*/

#include <stdio.h>

void showbits(int num);

int check_on(unsigned char x, int b)
{
    unsigned char j, n;

    j = 1 << b;
    n = x & j;

    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    };
};

int checkbits(unsigned char x, int p, int n)
{

    for (int i = p; i > p - n; i--)
    {
        if (check_on(x, i))
        {
            printf("x is on at %d\n", i);
        }
        else
        {
            printf("x is off at %d\n", i);
            // return 0;
        }
    };
    return 1;
}

int main()
{
    unsigned char x = 10;
    int n = 3, p = 4;
    printf("enter any number  : \n"); // byte size is 2 //126 7e 24446=>11:59:60
    // scanf("%hu", &time);
    showbits(x);

    checkbits(x, p, n);
    // return 0;
}

void showbits(int num)
{
    unsigned char k, andmask;
    // int new_num = 0;
    // printf(" | in decimal : %d\n", num);

    for (int i = 7; i >= 0; i--)
    {
        andmask = 1 << i;
        k = num & andmask;

        k == 0 ? printf("0") : printf("1");
        // new_num += k;
    }
    printf("\n");
}
