#include <stdio.h>

void showbits(int num);

int main()
{
    unsigned char n = -10, k;

    printf("\n decimal %d is same as binary " , n);
    showbits(n);

    for(int j =1 ; j <=3 ; j++){
        k = 1 >> j;
        printf("\n right shift %d gives " , n , j);  
        showbits(k);
    }

printf("right shifting\n" );
    for (int i = 0; i < 7; i++)
    {
        k = n >> i; // k  = n / 2^i
        showbits(k);
    }
printf("\n");

printf("left shifting\n");
    for (int i = 0; i < 7; i++)
    {
        k = n << i;  // k  = n * 2^i
        showbits(k);
    }

    return 0;
}


void showbits(int num)
{
    unsigned char k, andmask;
    int new_num = 0 ;
    printf("in binary : ");
    
    for (int i = 7; i >= 0; i--)
    {
        andmask = 1 << i;  
        k = num & andmask; 

        k == 0 ? printf("0") : printf("1");
        new_num += k ;
    }
    printf(" | in decimal : %d\n" , new_num);
}