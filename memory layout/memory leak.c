#include <stdio.h>
#include <stdlib.h>


// if we use free(ptr) then  memory leak will not happen as it release the current storage
int main()
{
int *n;

int i =0 ;

while (i < 100)
{
    printf("value of n = %d and address = %d\n" , *n , n  );

    n = malloc(32534 * sizeof(n));
    
    if(i % 10)
        getchar();

    i++;


};

    free(n);
      printf("value of n = %d and address = %d\n" , *n , n  );


    return 0;
}