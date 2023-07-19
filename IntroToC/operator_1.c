#include <stdio.h> //for printf
#include <conio.h> //for getch

int main()
{
    int y = 3;
    y++; //    (post incriment)
    printf("%d", y);
    ++y; // y=y+1 y ki valu me i se incriment (pre increment)
    printf("%d", y);

    getch();

    return 0;
}