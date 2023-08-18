#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Compony
{
    int *emplyId;
    char name[20];
} * emp;
//size is 24


int main()
{
    int n, len;
    printf("enter no of companies : ");
    scanf("%d", &n);
    emp = (struct Compony *)malloc(n * sizeof(struct Compony));

    for (int i = 0; i < n; i++)
    {
        printf("\ndata of company %d \n" , i+1);

        printf("enter length of emply id : ");
        scanf("%d", &len);

        emp[i].emplyId = (char *)malloc( (len+1) * sizeof(char));

        printf("enter employee id : ");
        scanf("%s", emp[i].emplyId);

        printf("name : ");
        scanf("%s", emp[i].name);

        free(emp[i].emplyId);
    }
    for(int i=0 ; i<n;i++){
        printf("\nname : %s \nemployee Id : %s\n", emp[i].name, emp[i].emplyId);
    }
    return 0;
}
// emplyId = (char *)calloc(len , sizeof(char));
// emplyId = (char *)malloc(len * sizeof(char));


// int main()
// {

//     int len, i = 0;
//     char gender, *ptr_id, *ptr_name;

//     while (++i < 3)
//     {
//         printf("\nemployee %d data:\n", i);

//         printf("enter no of characters in your emply id : ");
//         scanf("%d", &len); //when we press enter it is in input buffer .. there next input will be ignored
//         // getchar();         // character enter will be consumed by him

//         ptr_id = (char *)malloc((len + 1) * sizeof(char)); //len+1 because extra char (\0) will add in string at the end
//         printf("enter your employee id : ");
//         scanf("%s", ptr_id); // a will store the charater enter key if getchar nor present;

//         // getchar();


//         ptr_name = (char *)malloc((len + 1) * sizeof(char));
//         printf("name : ");
//         scanf("%s", ptr_name);

//         printf("enter gender (m/f): ");
//         getchar();
//         scanf("%c" , &gender);

//         printf("\nemployee id : %s\nname : %s\nage : %c\n", ptr_id, ptr_name, gender);
//         printf("\nemployee id : %d\nname : %d\nage : %d\n", sizeof(ptr_id), sizeof(ptr_name), sizeof(gender));
        
//         free(ptr_name);
//         free(ptr_id);
//     }
//     return 0;
// }