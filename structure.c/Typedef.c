#include<stdio.h>
typedef struct student 
{
    int rollno;  
    char name[10];
    int age;
}STUDENT;
int main ()
{
   STUDENT h;
    printf("enter student roolno.>> ");
    scanf("%d",&h.rollno);
        printf("enter student name>> ");
        fflush(stdin);
        gets(h.name);
            printf("enter student age>> ");
            scanf("%d",&h.age);
                printf("%d/%s/%d",h.rollno,h.name,h.age);
                return 0;

 

} 