#include <stdio.h>

//static stores the previous value of and after chging to renew to its new value after refreshing
int main()
{
    int a=5;

    int f1(){
        int static  a=5; //static only written inside function //by default it takes valude 0
        a++;
    
        return a;
    }

    printf("%d\n" , f1(a));
    printf("%d\n" , f1(a));
    printf("%d\n" , f1(a));
    printf("%d\n" , f1(a));
    printf("%d\n" , f1(a));


 

    return 0;
}
