#include <stdio.h>

void showbits(int num);

int main()
{

   char n = -5, k;  // if n < 0 then is left most bit is 1 . on n >> 1 ; right most bit is lost ; will become -3(111111101) 

    printf("decimal %d is same as binary ", n);
    showbits(n);

    for (int j = 1; j <= 3; j++) 
    {
        k = n >> j; //k = 11111111 if j < 0
        printf("\n%d right shift %d gives ", n, j);
        showbits(k);
    }

    return 0;
}

void showbits(int num)
{
    unsigned char k, andmask;
    int new_num = 0;
    printf("\nin binary : ");
    for (int i = 7; i >= 0; i--)
    {
        andmask = 1 << i;
        k = num & andmask;

        k == 0 ? printf("0") : printf("1");
        new_num += k;
    }
    printf(" | in decimal : %d\n", new_num);
}