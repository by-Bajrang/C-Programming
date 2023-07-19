#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if (marks>90)
      printf("grade_A");
    else if(marks>80) 
      printf("grade_B");
    else if (marks>70)
      printf("grade_c");
    else 
      printf("grade_D");                 
}