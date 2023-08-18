#include <stdio.h>

int main()
{

  unsigned char a = 10, b = 1, ab;

  ab = a >> b; // 10 >> 1 = 00000010 (2) ( a / 2^b)
  printf("right shift : %d\n", ab);

  ab = a << b; // 10 >> 2 = 00101000 (2) ( a * 2^b)
  printf("left shift : %d\n", ab);

  ab = a & b; //00001010 ~ //00010100 => & =  00000000
  printf("and ope : %d\n", ab);

  ab = a | b; //00001010 ! //00010100 => & =  30
  printf("or ope : %d\n", ab);

  ab = a ^ b; //00001010 ~ //00010100 => & =  00000000
  printf("xor ope : %d\n", ab);

  ab = ~a; // 00001010 => 11110101 = 245
  printf("complement ope : %d\n", ab);

  return 0;
}
