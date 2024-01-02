#include <stdio.h>
int length(char *);
char *revers(char *);
int main()
{
    printf(" length of string =%d\n", length("computer"));
    printf(" revers of string =%s", revers("computer"));
}
int length(char *p)
{
    int l;
    for (l = 0; *(p + l) != '\0'; l++)
        ;
    return (l);
}
char *revers(char *p)
{
    int l, i;
    char t;
    for (l = 0; *(p + l) != '\0'; l++)
        ;
    for (i = 0; i < l / 2; i++)
    {
        t = *(p + i);
        *(p + i) = *(p + l - 1 - i);
        *(p + l - 1 - i) = t;
    }
    return (p);
} 