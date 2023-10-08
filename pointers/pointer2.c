#include<stdio.h>
#include<conio.h>
int main ()
{
int x=5,*j;
j=&x;
printf("%d\n%u",x,j);
printf("\n%d\n%u\n",*j,&x);
printf("%u",*&j);




} 