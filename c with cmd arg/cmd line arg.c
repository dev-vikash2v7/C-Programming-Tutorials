#include <stdio.h>
#include <stdlib.h>

int main(int argc , char* argv[])
{

printf("argc is : %d\n",argc);

if(argc > 2){
    puts("the arg supplied are : \n");

    for(int i = 0 ; i < argc ; i++){
        printf("%s\t" , argv[i])
    }
}
// printf("argv is : %s %s\n",argv[0]  , argv[1]);

//argv[0] = D:\C tutorls\miscllenious features\cmd line arg.exe

    return 0;
}