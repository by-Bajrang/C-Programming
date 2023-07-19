#include<stdio.h>
int main ()
{
    int a,b,c ;
    printf("enter three no. ");
    scanf("%d %d %d ",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
        printf("%d is greatest no.",a);
        }   
    else
    {
        printf("%d is greatest no.",c);     
    }
    }
    else
    {
     if(b>c)
     {
        printf("%d is greater no.",b);
     }
     else
     {
        printf("%d is greater no.",c);
     }
    }
}