#include<stdio.h>
#include<conio.h>
int main()
{
    int x,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
     ***r=10; // ***r=**q=*p=x hota hai samza kya 
     printf("%d",x);
}