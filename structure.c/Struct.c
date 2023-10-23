#include <stdio.h>
struct date
{
  int d, m, y;
};

int main()
{
  struct date today, d1;
  today.d = 16;
  today.m = 10;
  today.y = 2023;
  d1 = today;
  printf("%d/%d/%d", d1.d, d1.m, d1.y);
}