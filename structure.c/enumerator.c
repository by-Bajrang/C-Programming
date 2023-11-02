#include <stdio.h>
enum boolean
{
    false,
    true
};
enum boolean isEven(int a)
{
    if (a % 2 == 0)
        return (1);
    else
        return (0);
}

int main()
{
    int a;
    enum boolean n;
    printf("enter a no. >>");
    scanf("%d", &a);
    n = isEven(a);
    if (n == true)
        printf("even number");
    else
        printf("odd number");
}