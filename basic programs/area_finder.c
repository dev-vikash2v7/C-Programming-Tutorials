#include<stdio.h>
#include<stdlib.h>

#define _USE_MATH_DEFINES
#include<math.h>


float triangle(int a,int b,int c){
    float avg = (float) (a+b+c)/3;

    return (float)(sqrt (avg * (avg-a) * (avg-b) *  (avg-c) )) ;
    };

float square(int s){
    return (float)(s*s) ;
    };

float rectangle(int a,int b){
    return (float)(a*b) ;
    };

float circle(int r){
    return (float)( M_PI * r*r ) ;
    };

float ellipse(int a , int b){
    return (float)( M_PI * a*b ) ;
    };

float pentagon(int s,int h){
    return (float)( 5 * (s*h)/2 ) ;
    };
    
float parallelogram(int a,int b){
    return (float)(a*b ) ;
    };



int main()
{
    float area ;
    int choice , a,b,c,s,r,h;

    system("cls");

    printf("Shapes Area Finder => \n1-traingle\n2-square\n3-rectangle\n4-circle\n5-ellipse\n6-pentagon\nenter shape no : ");
    scanf("%d", &choice);

    switch(choice){

        case 1:{
            printf("enter sides of triangle  in cm : ");
            scanf("%d %d %d",&a,&b,&c);
            area = triangle(a,b,c);
            break;
        };

        case 2:{
            printf("enter side of square  in cm : ");
            scanf("%d",&s);
            area = square(s);
            break;
        };
        case 3:{

            printf("enter sides of rectangle  in cm : ");
            scanf("%d %d",&a,&b);
            area = rectangle(a,b);
            break;
        };
        case 4:{
            printf("enter radius of circle : ");
            scanf("%d",&r);
            area = circle(r);
            break;
        };
       
        case 5:{
            printf("enter length of x,y axis : ");
            scanf("%d %d",&a,&b);
            area = ellipse(a,b);
            break;
        };
       
        case 6:{
            printf("enter length of side and height of pentagon : ");
            scanf("%d %d",&s,&h);
            area = pentagon(s,h);
            break;
        };

        case 7:{
            printf("enter base height of parallelogram : ");
            scanf("%d %d",&s,&h);
            area = parallelogram(s,h);
            break;
        };
       
        default:{

        printf("not enter valid number\n");
        main();
        };

    };
    printf("area : %f cm^2\n\n",area);

    char cont;
    printf("continue or not y/n : \n" );
    scanf("%s" , &cont);

    switch(cont){
        case 'y':{
            main();
        }
        default :{
            printf("Thank YOU!!");
            exit(0);
        }
    };


    return 0;

};



