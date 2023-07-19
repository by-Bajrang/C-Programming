#include<stdio.h>

int main()
{
    int x; // declear statement
 printf("enter one number");  // first action statements
 scanf("%d",&x);              // second action statemen ts

    if(x>0)
    {   // if only one line after if condition then it will successfully executed otherwise not then apply curly bracket

        printf("positive number");
    }
    else
    {
        printf("non positive no.");
    }

    return 0; 
}
