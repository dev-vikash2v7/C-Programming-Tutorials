#include <stdio.h>

int main()
{
    int arr[] = {0, 1, 2, 3, 4} ;
    int  *i , *j;


//index not in range will show a random address
i = arr[4] ;
j = &arr ; //assing the 0th address of array

for(int a=0 ; a < 5 ; a++){
    //both are same
    printf("element %d at location = %u \n" ,arr[a] , &arr[a]  );
    printf("element %d at location = %u || %u \n\n" ,a[arr] , (arr + a) , j );
    j++;
    
}

printf("\n");

if( i > 100000 || j > 100000){
printf("error  : index not in range !!!");
}


printf("%d %d" ,  i ,j  );


    return 0;
}