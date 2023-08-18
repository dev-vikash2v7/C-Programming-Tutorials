//a menu driven prog for elementary database management

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    FILE *ps , *pt;
    char str[80];
    int choice;

    ps = fopen("sample.txt", "r");
    pt = fopen("string file.txt", "a");

fputs("\n", pt);
    while (fgets(str, 89, ps) != NULL)
    {
        fputs(str, pt);
        
    }

    fclose(pt);
      pt = fopen("string file.txt", "r");
    while (fgets(str, 89, pt) != NULL)
    {
        printf("%s", str);
    }
    fclose(ps);

    return 0;
}
