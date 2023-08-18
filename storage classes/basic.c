#include <stdio.h>
#include <stdlib.h>

// int sum = 98;

int fun(int a, int b)
{
//       auto int sum; //declare the value of sum globallay
// extern int num = 55;

static int sum ; //default 0
      sum ++;
        return sum;
}


int main()
{
register int sum =    fun(3, 5);
        printf("%d\n", sum);
sum =    fun(3, 5);
        printf("%d\n", sum);

sum =    fun(3, 5);
        printf("%d\n", sum);

sum =    fun(3, 5);
        printf("%d\n", sum);

sum =    fun(3, 5);


        return 0;
}

//storage class defines following attributes
/* 
1.scope  :  where will this var available
2.default initial value  : int a
3.lifetime  : life of that var
*/

//4 types of storage classes
/*
1.automatic var =>
        =>  a var defined without any storage classs specification is by defaylt
        ex : in a ; and auto int a; are same

2.external var (extern val) =>
        => same as gloabal var
        => minimise use of global var
        => isomg extern will not allocate space for the var

3.static var =>
        => scope local to the block they are defined in
        => default value is 0
        => available throught the program

4.register var =>
        => local scope to the func they are declared in
        => default value is garbage
        => register var requests the compiler to store the var in the cpu register instead of storing in the memory to have faster access.
        => this is done for the var which are being used freq
*/