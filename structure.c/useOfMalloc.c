#include <stdio.h>
#include <stdlib.h>// per define of malloc, calloc and reallo
int main()
{
    float *p;
    p = (float *)malloc(4);
    *p = 3.5;
}   