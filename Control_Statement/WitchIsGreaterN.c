#include<stdio.h>
int main ()
{
    int a,b,c ;
    printf("enter three no. ");
    scanf("%d%d%d",&a,&b,&c);
    // scanf("%d",&a);
    // scanf("%d",&b);
    // scanf("%d",&c);
    if ( a>b ) 
    {
        a>c? printf("%d is greatest no.",a) : printf("%d is greatest no.",c);
    }
    else
    {
     b>c ? printf("%d is greater no.",b) : printf("%d is greater no.",c);
     }


     return 0;
}