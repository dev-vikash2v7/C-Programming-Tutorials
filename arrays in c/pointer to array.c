#include <stdio.h>

void main()
{
    //pointer to an array
    int arr[2][3] = {{0, 1, 5}, {2, 3, 4}};
    int (*p)[3]; // p - it is a pointer to an array of 3 integers.
    //without parentehesis() p  make an array of 2 integer pointers.

    int i,j,*pint;

    for (int i = 0; i < 2; i++)
    {
           p = &arr[i] ;
            pint = (int *) p; //store address of row
        
        for (int j = 0; j < 3; j++)
        {
            printf("element = %d \n", *(pint + j)); //row + column
    };

    };

//array of pointer
    // int *arr2[4];
    // int a =3 , b =5 , c = 33 , d = -23 , m;

    // arr2[0] = &a;
    // arr2[1] = &b;
    // arr2[2] = &c;
    // arr2[3] = &d;

    //  for (m = 0; m < 4; m++)
    //     {
    //         printf("element = %d \n", *(arr2[m]));
    // };


};