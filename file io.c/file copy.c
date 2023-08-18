#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    FILE *fs, *ft;

    fs = fopen("sample.txt", "r");
    ft = fopen("sample copy.txt", "w");

    if (fs == NULL)
    {
        printf("file does not exist !!");
        exit(1);
    };

    while (1)
    {
        ch = fgetc(fs);

        if (ch == EOF)
        {
            break;
        };

        fputc(ch, ft);

    };

fclose(fs);
fclose(ft);
    
        return 0;
};
