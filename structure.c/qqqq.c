#include <stdio.h>
union item
{
    int x;
    float y;
    char z;
};
int main()
{
    union item p;
    p.x = 4;
    printf("x=%d", p.x);
    p.y = 6.5;
    printf("y=%f", p.y);
    p.z = 'b';
    printf("z=%c", p.z);

    return 0;
}