#include<stdio.h>
#include<conio.h>
int main()
{
 int sum;
 int fun(int);
sum =fun(5);
printf("%d",sum);

}
int fun (int a)
{
    int s;
if (a==1)
return (a);
s=fun(a-1);
return(s);



}