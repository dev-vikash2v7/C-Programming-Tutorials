#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//string copy
void strxcopy(char *target, const char *name)
{
    while (*name != '\0')
    {
        *target = *name;
        name++;
        target++;
    };
    *target = '\0'; //to mark its end.
};

//string length
int strxlen(char *name)
{
    int len = 0;
    while (*name != '\0')
    {
        len++;
        name++;
    };
    return len;
}

//string catenation
void strxcat(char *tag, const char *name)
{
    int len = strxlen(tag);
    printf("%d", len);

    tag += len;
    tag++;

    while (*name != '\0')
    {
        printf("%s %s\n", *name, *tag);

        *tag = *name;
        name++;
        tag++;
    };
}

void main()
{
    char name[] = "vikash verma", target[20];

    // strcpy(target, name);
    // strxcopy(target, name);
    // printf("copy = %s | original = %s", target, name);

    // printf("length of %s = %d\n"  ,name , strlen(name) );
    // printf("length of %s = %d\n"  ,name ,  strxlen( name) );

    // char tag[30] = "Mr. ";
    // // strcat(tag, name);
    // strxcat(tag, name);
    // printf("%s", tag);

    char s1[] = "jerry", s2[] = "tom";

    int i = strcmp(s1, s2);
    int j = strcmp(s2, s2);
    int k = strcmp(s1, "ogggyyy");

    printf("%d %d %d", i, j, k);
};
