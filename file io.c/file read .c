#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int chr = 0, tabs = 0, newlines = 0, spaces = 0 ;

FILE *fs;
    fs = fopen("sample.txt", "r");

    if (fs == NULL)
    {
        printf("file does not exist !!");
        exit(1);
    };

    while (1)
    {
        ch = fgetc(fs);

if(ch == EOF) {break;};

        switch (ch)
        {
      
        case ' ':
            spaces++;
            break;

        case '\n':
            newlines++;
            break;

        case '\t':
            tabs++;
            break;

        default:
            chr++;
            break;
        };

        printf("%c", ch);
    };
    printf("\ntotal chr = %d\ntotal blanks=%d\ntotal tabs= %d\ntotal newlines= %d" , chr , spaces , tabs , newlines);

    return 0;
}
