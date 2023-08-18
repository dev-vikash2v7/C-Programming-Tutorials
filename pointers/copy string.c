#include <stdio.h>

char *copy(char *t, char *s)
{

    char *r;
    r = t;
    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';

    return (r);
};

int main()
{

    char source[] = "vikash", target[10], *str;

    str = copy(target, source);

    printf("target : %s", str);

    return 0;
}