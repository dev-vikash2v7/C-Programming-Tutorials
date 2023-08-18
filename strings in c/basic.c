#include <stdio.h>

void main()
{

    char name[] = "vikash verma", g = 'm';
    char phone[] = {'8', '8', '1', '7', '9', '5', '6', '9', '3', '5', '\0'};
    char *ptr;

    printf("%s %c %s\n", name, g, phone);

    int i = 0;
    ptr = name ;//store base address of string

    while (*ptr != '\0')
    {
        printf("%c-%c\n", name[i]   ,*ptr);
        ptr++;
        i++;
    };

  
}
