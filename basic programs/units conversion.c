#include <stdio.h>

int converter(char unit1, int constant, char unit2)
{

    int value=0;
    printf("enter unit in %s : ", unit1);
    scanf("%d", &value);

    printf("\n%d %s = %f %s\n", value, unit1, value * constant, unit2);

    // return 0;
};

void main()
{
    int choice = 0;
    printf("Units Conversion : \n1- cm - mm\n2- m - km\n3- km - cm\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        converter('cm', 100, 'mm');
        break;
    }
    case 2:
    {
        converter('m', 0.001, 'km');
        break;
    }
    case 3:{
        converter('km', 100000, 'cm');
        break;
    }
    default:{
        printf("enter wrong number !! \n");
        break;
    }
    };

    };