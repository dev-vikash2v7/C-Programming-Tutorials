#include <stdio.h>

void showbits(int num);

int main()
{
    unsigned char n = 0xDD, k; // n = 221
    n = 24446;
    showbits(n);

    k = n & 0x20; //to check 5th bit // n & 32

    // printf("%d %d %d %d\n",0xDD ,  0x20 , 0x08 , 0xF7  );

    k == 0 ? printf("5th bit is off\n") : printf("5th bit is on\n");

    // k = n & 0x08; //to check 3rd bit // n & 8

    // if (k == 0)
    // {
    //     printf("3rd bit is off\n");
    // }
    // else
    // {
    //     printf("3rd bit is on\n");

    //     n &= 0xF7; n & 247

    //     printf("\nnew value of num in decimal %d and in binary is : ", n);
    //     showbits(n);

    //     k = n & 0x08;

    //     k == 0 ? printf("\n3rd bit is off\n") : printf("\n3rd bit is on\n");
    // }
    return 0;
}

void showbits(int num)
{
    unsigned char k, andmask;
    printf("%d %x",num , num);
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
