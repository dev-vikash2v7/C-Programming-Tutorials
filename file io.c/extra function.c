#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ptr = fopen("sample.txt", "w");



////reading character from file
    char c = fgetc(ptr);

    int cnt = 0 ;
    while (c != '\0')
    {
        cnt++;
        printf("%c", c);
        c = fgetc(ptr);
    }

printf("total length : %d" , cnt);

    fseek(ptr , SEEK_SET , SEEK_SET);


//reding string from file
    printf("\nfgets function :\n");

    char str[100];

    fgets(str, 100, ptr);
    printf("%s\n", str);

    fgets(str, 100, ptr);
    printf("%s\n", str);


////for writing in file via ptr

// in char mode writng
//     fputc( 'h' , ptr);
//     fputc( '\n' , ptr);

// ////in string mode writing
//     char s3[] = "3.this is the third line" ;
//     fputs(s3 , ptr) ;
//     fputc('\0' , ptr);

    return 0;
}