#include <stdio.h>
#include <stdlib.h>

int main()
{

printf("date(mmm dd yyyy) : %s\n", __DATE__);
printf("time (hh:mm:ss) : %s\n", __TIME__);
printf("current filename : %s \n", __FILE__);
printf("current line number : %d\n", __LINE__);
printf("is compiler complies with the ANSI C  standards (1 for true) : %d\n", __STDC__);

    return 0;
}