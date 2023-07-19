#include <stdio.h>
int main()
{
    int x, y, max;
    printf("enter two no. ");
    scanf("%d %d", &x, &y);
    // max = x > y ? x : y;
    // printf("greater no. is %d", max); or
    printf("greater no. is %d", x > y ? x : y);
}