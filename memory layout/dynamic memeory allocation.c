#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
    printf("enter the size of array you want to create : ");
    scanf("%d", &n);

    //use of malloc
    ptr = (int *)malloc(n * sizeof(int)); //if value is not provide to address it will store random values (garbage values)

    //use of calloc
    //ptr = (int*)calloc(n , sizeof(int)); //if value is not provide to address it will store 0(null) to it address
    

    printf("array initialise at %d and its size is %d\n", ptr, sizeof(ptr));

    //reaclloc use
    printf("enter the size of new array you want to create : ");
    scanf("%d", &n);
    ptr = (int *) realloc(ptr , n * sizeof(int)) ;


    for (int i = 0; i < n; i++)
    {
        printf("enter the value %d of this array : ", i);
        scanf("%d", &ptr[i]);   
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("\naddress at  %d is %d of this array and value %d ", i, &ptr[i], ptr[i]);
    }
    
  //free use
    free(ptr);
    return 0;
}

/* 4 types of memeory allocation : 
 1 . malloc : memory allocation
    => reserves block of memory with the given amount of bytes and return value is void pointer to   the   allocated space
     =>  all the values at allocated memory are initialized to garbage values
      => ptr = (ptr-type*) malloc(3 * size(data-type))

 2 . callocac : contiguous  allocation
    => reserves n  block of memory with the given amount of bytes 
     =>  all the values at allocated memory are initialized to 0
      => ptr = (ptr-type*) calloc(n , size in bytes)

 3 . realloc : re allocation
     => if the dynamillacy allocated memory is insufficient we can chg the size of previously allocated memory using 
      => ptr = (ptr-type*) realloc(ptr ,new size  *  data type)

 4 . free : 
     => if the dynamicllay allocated memory is not required anymore,we can free it using free func.
      => this will free the memmory being used by the programer to heap
      => free(ptr)
 */