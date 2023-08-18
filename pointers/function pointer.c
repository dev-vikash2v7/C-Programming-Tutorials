#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int avgFunction(int a, int b)
{
    return ((a + b)/2) ;
}
//callback function

void greetHello(int (*fptr)(int, int))
{
    printf("\nhello world\n");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
}

void greetGoodMorning(int (*fptr)(int, int))
{
    printf("good morning user!!\n");
    printf("the sum of 5 and 7 is %d", fptr(5, 7));
}

void greetGoodAfternoon(int (*fptr)(int, int), int a, int b)
{
    printf("\n\ngood afternoon user!!\n");
    printf("the sum of %d and %d is %d", a, b, fptr(a, b));
}

int main()
{
        int a, b;


    int (*SumOfVarPtr)(int, int) = NULL;
    int (*avgOfPtr)(int, int) = NULL;

    
    printf("enter 2 values to average : ");
    scanf("%d %d", &a, &b);

    SumOfVarPtr = &sum; //sumPtr points to address of sum() function

    int sum = (*SumOfVarPtr)(2, 3);
    printf("the sum of 1 and 2 is %d\n\n", sum);



///calback function
    greetGoodMorning(SumOfVarPtr);
    greetHello(SumOfVarPtr);
    
    avgOfPtr = avgFunction;

    greetGoodAfternoon(avgOfPtr, a, b);

    avgOfPtr = NULL;
    SumOfVarPtr = NULL;

    return 0;
}

//function pointer

/*

1.point to code and not data

2. usefull to implement callback function

3. we do not de-allocate  memory using function pointer

 */

// callback  function

/*

1 . used to pass a  function to a function

2. this passed function can then be called again (hence the name callback function)

3. this provides programmer to write less code to do more stuff

 */