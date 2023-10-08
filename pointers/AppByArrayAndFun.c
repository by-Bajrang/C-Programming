#include <stdio.h>
void input(int *p)
{
    int i;
    for (i = 0; i <= 4; i++)
        scanf("%d", p + i);
}
void display(int *p)
{
    int i;
    for (i = 0; i <= 4; i++)
        printf("%d  ", *(p + i));
}
void sort(int *p)
{
    int round, i, t;
    for (round = 1; round <= 4; round++)
        for (i = 0; i <= 4 - round; i++)
        {
            if (*(p + i) > *(p + 1 + i))
            {
                t = *(p + i);
                *(p + i) = *(p + 1 + i);
                *(p + 1 + i) = t;
            }
        }
}

int main()
{
    int a[5];
    input(a); // array ka naam likhna matlab 1st block ka addres dena
    display(a);
    sort(a);
    display(a);
}
