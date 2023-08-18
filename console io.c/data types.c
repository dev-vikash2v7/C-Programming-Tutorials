#include <stdio.h>

int main()
{
    //integer
    short int a =1; //2
    short unsigned int b = 1; //2
    long  int c =1; //4
    long unsigned int d =1; //4

    //real
    float e =1; //4
    double f =1; //8
    long double  g =1; //12

    //chr
    char h; //1
    unsigned char i; //1

    //string


  printf("%u %u %u %u - %u %u %u - %u %u\n" , sizeof(a) , sizeof(b) , sizeof(c) , sizeof(d) , sizeof(e) , sizeof(f) , sizeof(g) , sizeof(h) , sizeof(i));

  printf("%u %u %u %u - %u %u %u - %u %u \n" , &a , &b , &c , &d , &f , &f , &g , &h , &i );
  printf("%d %u %ld %d - %f %fl %Lf - %c %c" , a,b,c,d ,e,f,g,h,i);
}

