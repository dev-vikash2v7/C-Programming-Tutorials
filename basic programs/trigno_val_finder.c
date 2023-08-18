#include <stdio.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES
#include <math.h>

float deg_to_radian(float deg)
{
    return (float)deg * (M_PI / 180);
};

int factorial(int val)
{
    int fac = 1;
    for (int i = 1; i <= val; i++)
    {
        fac *= i;
    };
    return fac;
};

//sinx = x - x3/3! + x5/5! - x7/7! +.....
float sinx(float x)
{
    float sin = 0;
    int n = 1;

    for (int i = 0; i < 7; i++)
    {
        sin +=  (pow(-1 , i) * pow(x, n) / factorial(n));
        n += 2;
    };
    return sin;
};

//cosx = 1 - x2/2! + x4/4! - x6/6! +.....
float cosx(float x)
{
    float cos = 0;
    int n = 0;

    for (int i = 0; i < 7; i++)
    {
        cos += (pow(-1, i) * pow(x, n) / factorial(n));
        n += 2;
    };
    return cos;
};


//tanx = x + x3/3 + 2 x5 /15 + 17 x7/315 +.....
//
float tanx(float x)
{
    float tan ,sin = 0 , cos = 0;
    int n = 1;

    for (int i = 0; i < 7; i++)
    {
        sin += (pow(-1 , i) * pow(x, n) / factorial(n))      ;
        cos +=  (pow(-1, i) * pow(x, n-1) / factorial(n-1)) ;
        n += 2;
    };
    tan = sin / cos;

    return tan;
};




int main()
{
    
    float value, deg, rad;
    int choice, acc;

    system("cls");

    printf("trigno values  Finder => \n1-sin\n2-cos\n3-tan\nenter operation no : ");
    scanf("%d", &choice);
    printf("\nenter value in degree : ");
    scanf("%f", &deg);
    

    rad = deg_to_radian(deg);

    switch (choice)
    {

    case 1:
    {
        value = sinx(rad);
        printf("\nsin(%f) = %f\n\n", deg, value);
        break;
    };

    case 2:
    {
        value = cosx(rad);
        printf("\ncos(%f) = %f\n\n", deg, value);
        break;
    };
    case 3:
    {
        value = tanx(rad);
        printf("\ntan(%f) = %f\n\n", deg, value);
        break;
    };

    default:
    {

        printf("\nnot enter valid number\n");
        main();
    };
    };

    char cont;
    printf("continue or not y/n : ");
    scanf("%s", &cont);

    switch (cont)
    {
    case 'y':
    {
        main();
    }
    default:
    {
        printf("Thank YOU!!");
        exit(0);
    }
    };

    return 0;
};
