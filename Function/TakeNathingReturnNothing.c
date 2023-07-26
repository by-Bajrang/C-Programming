#include <stdio.h>
#include <conio.h>
// void add(); yaha par bhi decleration ker sakte hai user define fxn ka

void main()
{
    void add(void); //  jis jhagha use kar rahai ho vaha par bhi decleration kar sakte ho
     add();
     getch();

    //  return 0;
}

void add()
{
    int a, b, c;
    printf("enter two no.");
    scanf("%d%d", &a, &b);
    printf("sum is %d", a + b);
}
