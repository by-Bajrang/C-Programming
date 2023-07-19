#include<stdio.h>
int main ()
{
    int a,b,c ;
    printf("enter three no. ");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a>b ? a>c? a : c : b>c ? b : c);
    return 0;
}