#include<stdio.h>
int main()
{
int x=5;
printf("%d",x);
printf("\n%d",&x);  // yaha address print ho raha hai samza kya
printf("\n%d",*&x);

} 
