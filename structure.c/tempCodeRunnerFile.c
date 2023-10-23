#include<stdio.h>
union item
{
    int x;
    float y;
    char z[10];
};
int main ()
{
union item p;
printf("enter price of mouse=");
scanf("%d",&p. x);
printf("enter id of mouse=");
scanf("%f",&p. y);
printf("enter name of mouse=");
fflush(stdin);
gets(p.z);

printf("\n%d/%f/%s",p.x,p.y,p.z);

return 0;

}