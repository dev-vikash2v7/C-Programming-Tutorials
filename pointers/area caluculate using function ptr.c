#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

//euclidean distance
float Edistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float areaCalculate(int x1 , int y1 , int x2 , int y2 , float (*distance )int x1 , int y1 , int x2 , int y2 )
{
    return distance(int x1, int y1, int x2, int y2);
}

int main()
{
    int x1 = 2,x2 = 3,y1 = 7 , y2=9;
 

    float area = areaCalculate(x1 ,y1 , x2 , y2 ,Edistance );

    printf("area of circle is %f\n", area);

    return 0;
}