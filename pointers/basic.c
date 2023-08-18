#include <stdio.h>

int main()
{
    int arr[] = {0, 1, 2, 3, 4}, arr2[5], *parr , i = 10 , j = 40  , b = 60 , *pi , *pj , *pb;

//pointers address are in decreasing order 
pi = &i;
pj = &j;
pb =  &b ; 

//pi-pb = 2 ( 6422248 - 6422240 / int(4) = 2  ) 

printf("%u %u %u %u %d" ,pi , pj  , pb, pi-pj , pi-pb , *pi-*pj  );
    // parr = &arr2;

    // for (int a=0; a < 5; a++)
    // {
    //     arr2[a] = a;

    //     printf("%u ", &parr[a]); 

    //     parr += 1;  //parr = parr + int(4)  * (1)
    // };
    // printf("%d %d %d",arr[0] , arr[0]  , parr);
    return 0;
}