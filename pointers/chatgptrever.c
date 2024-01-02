#include <stdio.h>

char* revers(char *p)
{
    int l, i;
    char t;
    for (l = 0; *(p + l) != '\0'; l++);
    for (i = 0; i < l / 2; i++)
    {
        t = *(p + i);
        *(p + i) = *(p + l - 1 - i);
        *(p + l - 1 - i) = t;
    }
    return p;
}

int main()
{
    char str[] = "bajrang";
    printf("%s", revers(str));
    return 0;
}
