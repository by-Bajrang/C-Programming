#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3], i, j;
    printf("enter nine no. for first matrix");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &A[i][j]);

    printf("enter nine no. for second matrix");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n"); // this is important
    }
}