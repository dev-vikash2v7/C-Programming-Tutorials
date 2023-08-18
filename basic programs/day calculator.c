#include <stdio.h>
#include <stdlib.h>

#define and &&
#define  or ||
 
int check_leap_year(int year)
{
    if (year % 4 == 0 and year % 100 != 0 || year % 400 == 0)
    {
        return 1;
    }
    return 0;
}

enum month_code
{
    march =3,
    april =6,
    may= 1,
    june= 4,
    july =6,
    aug= 2,
    sep =5,
    oct =0,
    nov =3,
    dec= 5
};



enum day_code
{
    sun,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
};

int main()
{
    int month, year, date, day;
    int jan  = 0 , feb = 3 ;  

    printf("enter date in format (date month year) : ");
    scanf("%d %d %d", &date, &month, &year);

// printf("year code  : %d\n" ,  year_code);

    if (check_leap_year(year))
    {
        printf("it is a leap year\n");
               jan = 6;
        feb = 2;
    };

    int months[12] = {jan, feb, march, april, may, june, july, aug, sep, oct, nov, dec};

int year_code = year >= 2000 ? year - 2000 + 100   :  (  year - 1900 < 10 ? year - 1900 + 10 : year - 1900 ) ;

printf("%d\n" , year_code);

    day = (date + months[month - 1] + year_code + (year_code / 4)) % 7;

    printf("at %d/%d/%d the day will " , date , month , year);
    
     switch (day)
    {
    case sun:
        printf("sunday");
        break;
    case mon:
        printf("monday");
        break;
    case tue:
        printf("tuesday");
        break;
    case wed:
        printf("wednesday");
        break;
    case thu:
        printf("thursday");
        break;
    case fri:
        printf("friday");
        break;
    case sat:
        printf("saturday");
        break;
    default:
        printf("pta nhi bc kya hai!!");
        break;
    }

    return 0;
}