#include<stdio.h>
#include<conio.h>
int fun (int);
int main()
{
 int k;  
 k=fun(55600);
 printf("sum of n natural no. is %d",k);
}
int fun (int a)
{
    int s;
    if(a==1)
    return(a);
    s=a+fun(a-1);
    return(s);
}                           


