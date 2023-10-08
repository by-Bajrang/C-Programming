#include <stdio.h>
#include <conio.h>
void swap(int *x, int *y);
int main()
{
    int a, b;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("a=%d b=%d", a, b);
    getch();
}

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}