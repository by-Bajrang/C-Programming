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
    printf("x=%d\n", p.x);

    p.y = 6.5;
    printf("y=%f\n", p.y);

    p.z = 'b';
    printf("z=%c\n", p.z);

    return 0;
}
