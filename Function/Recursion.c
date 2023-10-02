#include<stdio.h>
#include<conio.h>
int fun (int);
int main()
{
 int k;  
 k=fun(5);
 printf("sum of n natural no. is %d",k); 
}
int fun (int a)
{
    int s;
     if(a==1) //(imp a==1  matlab a is equal to one nahi hai yaha  )
    return(a);
    s=a+fun(a-1);
    return(s);
}                           


