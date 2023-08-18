#include <stdio.h>

void showbits(int num);

int main()
{
    unsigned char n =5, k=10; // n = 221

printf("initial value of k = %d\n" , k);
showbits(n);

    k = k ^ n; //will add the number 10+5 = 15
    
printf(" value of k after xor = %d\n" , k);
    showbits(k);

    k ^= n;  //chg to the same value as in initial
    printf("value of k will same as initial of k as after one more xor ope = %d\n" , k); //15-5 = 10
    showbits(k);
    return 0;
}

void showbits(int num)
{
    unsigned char k, andmask;
   
    for (int i = 7; i >= 0; i--)
    {
        andmask = 1 << i;
        k = num & andmask;

        k == 0 ? printf("0") : printf("1");
    }
    printf("\n");
}
