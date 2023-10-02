#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
    while(8)
    {
    
    int choice, a, b, s;
    
    
        printf("\n-------------Menu-------------");
        printf("\n1. addition");
        printf("\n2. odd_even");
        printf("\n3. print N number");
        printf("\n4. exit");

        printf("\nenter your choice");
        scanf("\n\n%d", &choice);
    switch (choice)
    {

    case 1:
    {
        printf("enter no.");
        scanf("%d%d", &a, &b);
        printf("sum is %d", a + b);
        break;
    }
    case 2:
    {
        printf("enter no.");
        scanf("%d",&a);
        if (a % 2 == 0)
            printf("is even ");
        else
            printf("is odd");
        break;
    }
    case 3:
    {
        printf("enter no.");
        scanf("%d", &a);
        for (b = 1; b <= a; b++)
            printf("%d\n" ,b); 
            break;
    }
    case 4 :
    {
    exit(0);


    }
    defalt:
    {
        printf("invalid ");
    }
    }
    getch();
    }
}