//typedef use to give new name to the reserved name

#include <stdio.h>

typedef struct student
{
    int id;
    int marks;
    char section;
    char name;
}std;

int main(){
  
   // typedef <previous_name> <alias_name>;
//    typedef unsigned long ul; //to give nick name ul to unsigned long
//    typedef int integer;

//     ul l1 ,l2 , l3;
//     integer a =4;


//   typedef integer* intPointer  ;
//     intPointer i,j;
//     integer c = 5;
    
//     i = &c;
//     j = &c;
//     printf("%d  -  %d\n" ,i, j);

//     std s1,s2;
//     s1.id = 56;
//     s2.id = 98;
 
//  printf("%d %d " , s1.id , s2.id);


// //typecasting
// int x = 6 ,y = 4;
// float a =  (float) x/y;
// float b =  x/y;
// float c =4.55;

char as = '2';
float ch = (float) as; 
printf("%f" , ch);
// printf("in float 6/4 = %.4f\nin integer 6/4 = %f \nc = %d"  ,a  , b , (int) c);
    
    return 0; 
}