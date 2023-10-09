#include<stdio.h>
int length(char *p);
int main ()
{
    printf(" length of string =%d",length("computer"));
}
int length(char *p)
{
    int l;
    for(l=0;*(p+l)!='\0';l++);
    return(l);
}