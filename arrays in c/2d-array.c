#include <stdio.h>

void main()
{
    int arr[2][3] = {{0, 1, 5}, {2, 3, 4}};
    // int arr1[3][2];
    int *a, *b;

    //index not in range will show a random address
    // i = arr[4] ;
    // j = &arr ; //assing the 0th address of array

    for (int i = 0; i <= 1; i++)
    {

        for (int j = 0; j <= 2; j++)
        {

            //both are same
            printf("element = %d location = %u  \n", *(*(arr+i) + j )  ,&arr[i][j]);
            // printf("element %d at location = %u || %u \n\n" ,a[arr] , (arr + a) , j );
            // j++;
        }

        printf("\n");

        // if( i > 100000 || j > 100000){
        // printf("error  : index not in range !!!");
        // }

        // printf("%d %d" ,  i ,j  );

    };
};