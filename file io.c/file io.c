#include <stdio.h>

int main()
{
    char str[100];
    FILE *ptr = NULL; //always define a pointer when not used

    // ptr = fopen("sample.txt", "r");

    //reading a file
    // fscanf(ptr, "%s", str); //store the first word in str

    //writing a file
    ptr = fopen("sample.txt", "w");
    char *str2 = "this is a new context \n\twritten by\n\tvikash verma\n";
    fprintf(ptr, "%s", str2);

    // printf("the content of file is :\n%s\n", str);

    return 0;
}