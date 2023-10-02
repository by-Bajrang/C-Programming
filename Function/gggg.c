#include<stdio.h>
//#include<conio.h>
int main ()
{
int i;
char s[2][10];
printf("enter two string");
for(i=0;i<=1;i++)
scanf("%s",s[i]);// use only s[i] not this s[i][0]  ******
for(i=0;i<=1;i++)
printf("%s",s[i]);



}