/*itime format is :
15 14 13 12  11 10 9  8  7  6  5 4 3 2 0
h  h  h  h   m  m  m  m  m  m  s s s s s */

#include <stdio.h>

void showbits(int num);

void display(unsigned short int time);

int main()
{
    unsigned short int time = 24446;                       // byte size is 2
    printf("enter any number less than 24446 : \n"); //126 7e 24446=>11:59:60
    // scanf("%hu", &time);

    display(time);

    return 0;
}

display(unsigned short int time)
{
    unsigned short int h, m, s, temp;
    
    h = time >> 11; //0 0 0 0 0 0 0 0 0 0 0 h h h h h

    temp = time << 5; //m m m m m 0 0 0 0 0 0 0 0 0 0 0
    m  = temp >> 10;  //0 0 0 0 0 0 0 0 0  0 0 m m m m m

    temp = time << 11; //m m m m m 0 0 0 0 0 0 0 0 0 0 0
    s  = temp >> 11;  //0 0 0 0 0 0 0 0 0  0 0 m m m m m
    s*=2;

    printf("%hu time format =>\nh : %hu\nm : %hu\ns : %hu\n" ,time, h ,m,s );
    
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
