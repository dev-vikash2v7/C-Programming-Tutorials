#include <stdio.h>
#include <stdlib.h>

void display()
{
    puts("life jio to aise ");
}

//function resturnning pointer
int *fun(){
    static int i = 20;
    return (&i);
}

int main()
{
    void (*func_ptr)();

    func_ptr = display; //assign address of func.
    printf("address of function : %d\n\n", func_ptr);

    (*func_ptr)(); //invokes the func display()*

    int *p;
    p = fun();
    printf("function return poineter value : %d\n" ,*p );
    return 0;
}