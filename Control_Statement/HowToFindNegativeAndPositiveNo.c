#include<stdio.h>

int main()
{
    int x; // declear statement 
 printf("enter one number");  // first action statements
 scanf("%d",&x);              // second action statements

    if(x>0){
        printf("positive number");
    }
    if(x<0){
        printf("non positive no.");
    }

    return 0; 
}
