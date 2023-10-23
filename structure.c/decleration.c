#include <stdio.h>
#include <conio.h>
struct date
{
  int d, m, y;
};

int main()
{
  struct date today, d1; // decleration
  today.d = 12;          // initialization
  today.m = 10;          // initialization
  today.y = 2023;        // initialization
                         // d1=today;
                         //  or
                         // d1.d = 12;
                         // d1.m = 10;
                         // d1.y = 2023;
  printf("enter today date");
  scanf("%d/%d/%d", &d1.d, &d1.m, &d1.y);
  printf("date %d/%d/%d", d1.d, d1.m, d1.y);
}