#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    
char ch , name[20];
// printf(" getch(); pres any key to cont.\n");
// getch(); ///will not echo the chr

// printf("\n getche(); type any chr.\n");
// ch = getche(); //will echo the current type

// printf("\n getchar(); type any chr.");
// getchar(); //will echo chr must be followed by enter key

// printf("\n fgetchar(); continue y/n \n");
// fgetchar();//will echo chr must be followed by enter key;

// putch(ch);
// putchar(ch);
// fputchar(ch);

puts("\nenter name : ");
gets(name);

puts(name);
strcat(name ," is zero point five" ) ; 
puts(name);
return 0;
}

