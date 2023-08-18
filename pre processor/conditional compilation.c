//macro expansion = > conditional compilation

// #include "stdio.h"

#ifndef __stdio_h
    #define __stdio_h
#endif

#define INTEL 
#define TEST 4


int main()
{


#ifdef INTEL   //if INTEL is deined then it will run like - #define INTEL 
    printf("it is intel\n");
#else 
    printf("it is microsoft\n");
#endif  
    printf("and it is an elecronic device which run by electricty\n");


#if TEST <= 5
    printf("%d less than or equal to 5\n" , TEST);
#elif TEST == 0 
    printf("%d is equal to 5\n" , TEST);
#else   
    printf("%d test is greate than than 5\n" , TEST);
#endif  
  

return 0;
};