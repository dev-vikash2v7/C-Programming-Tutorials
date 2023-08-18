// read string from file and display them on screen

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

    FILE *fp;
    char s[100];

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        puts("file does not exist !!");
        exit(1);
    };

    puts("enter few lines of text :\n");

    while (fgets(s, 99, fp) != NULL)
        printf("%s", s);

    puts("\n");
    fclose(fp);

    return 0;
};
