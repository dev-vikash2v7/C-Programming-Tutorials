#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *fp;
    char s[100];

    fp = fopen("string file.txt", "w");

    if (fp == NULL)
    {
        printf("file does not exist !!");
        exit(1);
    };

    puts("enter few lines of text :\n");

    while (1)
    {
        gets(s);

        if (strlen(s) == 0)
        {
            break;
        }

        fputs(s, fp); //for storing string line
        fputs("\n", fp);

        // fputc(ch, ft); // for storing single chr
    };

    fclose(fp);

    return 0;
};
