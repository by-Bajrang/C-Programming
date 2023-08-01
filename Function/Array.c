#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,sum=0;
float avg;//kuki average shayad point mai aye
printf("enter 10 no.");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);

for(i=0;i<=9;i++)
sum=sum + a[i];
avg=sum/10.0;
printf("Average is %f",avg);// %f for float variable 

} 