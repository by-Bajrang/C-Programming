#include <stdio.h>
int main()
{
    int i = 1, x;

    while (i <= 5)
    {
        printf("enter a no.");
        scanf("%d", &x);
        if (x > 0)
            break;
        i++;
    }

    // if(i==6)
    //     printf("ends normally");
    // else
    //     printf("applied break");

    // or
    i == 6 ? printf("ends normally") : printf("applied break");
}