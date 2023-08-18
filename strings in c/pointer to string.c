#include <stdio.h>
#include <stdlib.h>

void main()
{

    char str1[6] = 'hellow'  ;
    char *s = 'good morning' , *q;

//error
//cannnot assign a string to another
    // str2 = str1 ; //error : assignment to expression with array type

  //works
  //assign a char pointer to antehr char pointer
  q = s;
  printf("%s" , str1);
}
