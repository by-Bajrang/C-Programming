#include <stdio.h>
int main()
{
    int i, a[5], *p;
    p = &a[0];
    for (i = 0; i <= 4; i++)
        scanf("%d", p + i); //  dono same hai  //scanf("%d",&a[i]);
    for (i = 0; i <= 4; i++)
        printf("%d", *(p + i)); // ye dono bhi same hai// printf("%d",a[i]);
}