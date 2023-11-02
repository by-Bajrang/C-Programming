#include <stdio.h>
#include <stdlib.h>// per define of malloc, calloc and reallo
int main()
{
    float *p;
    p = (float *)malloc(4);
    *p = 3.5;


    int *t;
    t=(int*)calloc(4,2);// form array
    *(t+0)=5;
    *(t+1)=9;
     
     double *q;
    q=realloc(t,8);
}    