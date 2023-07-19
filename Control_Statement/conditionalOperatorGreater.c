#include<stdio.h>
int main ()
{
    int x,y; 
    printf("enter two no.");
    scanf("%d %d",&x,&y);
    x>y ? printf("greater no. is %d",x) : printf("greater no. is %d",y);

}