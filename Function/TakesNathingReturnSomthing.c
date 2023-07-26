#include<stdio.h>
#include<conio.h>
int add(void);

void main()
{
    int s;
    s=add();
    printf(" sum is %d",s);
    getch();
}


int add()
{
    int a,b,c;
    printf("enter  two no.");
    scanf("%d%d",&a,&b);
    c=a+b;
    return(c);
    printf("hello");  //ye code nahi chalega kuki return valu return karne ke sath control bhi return kar deta hai samja kya 
}