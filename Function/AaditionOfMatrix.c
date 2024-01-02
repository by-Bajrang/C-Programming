#include <stdio.h>
#include <conio.h>

void fillMatrix(int arr[][3])
{
    for (int i = 0; i <= 2; i++)
        for (int j = 0; j <= 2; j++)
            scanf("%d", &arr[i][j]);
}

void printMatrix(int arr[3][3])
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%0.2d ", arr[i][j]);
        } 
        printf("\n");
    }
    printf("\n");
}

void addMatrix(int arr1[3][3], int arr2[3][3], int arr3[3][3])
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main()
{
    int A[3][3], B[3][3], C[3][3];

    printf("Enter Matrix A\n");
    fillMatrix(A);
    printf("Matrix A\n");
    printMatrix(A);

    printf("Enter Matrix B\n");
    fillMatrix(B);
    printf("Matrix B\n");
    printMatrix(B);

    addMatrix(A, B, C);
    printf("Matrix C\n");
    printMatrix(C);
}