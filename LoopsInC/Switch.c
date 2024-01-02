#include <stdio.h> //Input->scanf  Output->Printf
#include<stdlib.h> //Exit

int main()
{
    int choice, a, b, s;
    
    
        printf("\n-------------Menu-------------");
        printf("\n1. addition");
        printf("\n2. odd_even");
        printf("\n3. print N number");
        printf("\n4. exit");

        printf("\n enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("enter two no.");
            scanf("\n%d%d", &a, &b);
            printf("sum is %d", a + b);
            break;
        }
        case 2:
        {
            printf("enter a no.");
            scanf("%d", &a);
            if (a % 2 == 0) //  important line
                printf("even");
            else
                printf("odd");
            break;
        }
        case 3:
        {
            printf("enter a no.");
            scanf("%d", &a);
             for(b=1;b<=a;b++)
                printf("%d\n", b);
            break;
        }
       case 4:
       {
            exit(0); // ye program ko end karne ka tareka hai na ki loop se bahar nikalne ka tarika
        }
        default:
        {
            printf("invalid choice");
        }
        }
    }
