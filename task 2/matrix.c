#include <stdio.h>

int main() {
    int choice;
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], result[10][10];

    printf("====== MATRIX OPERATIONS ======\n");
    printf("1. Matrix Addition\n");
    printf("2. Matrix Multiplication\n");
    printf("3. Matrix Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // ADDITION
        printf("\nEnter rows and columns: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter first matrix:\n");
        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c1; j++)
                scanf("%d", &A[i][j]);

        printf("Enter second matrix:\n");
        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c1; j++)
                scanf("%d", &B[i][j]);

        printf("\nResult (Addition):\n");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                result[i][j] = A[i][j] + B[i][j];
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    else if (choice == 2) {
        // MULTIPLICATION
        printf("\nEnter rows and columns of first matrix: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and columns of second matrix: ");
        scanf("%d %d", &r2, &c2);

        if (c1 != r2) {
            printf("Matrix multiplication not possible.\n");
            return 0;
        }

        printf("Enter first matrix:\n");
        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c1; j++)
                scanf("%d", &A[i][j]);

        printf("Enter second matrix:\n");
        for(int i = 0; i < r2; i++)
            for(int j = 0; j < c2; j++)
                scanf("%d", &B[i][j]);

        printf("\nResult (Multiplication):\n");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                result[i][j] = 0;
                for(int k = 0; k < c1; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    else if (choice == 3) {
        // TRANSPOSE
        printf("\nEnter rows and columns: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter matrix:\n");
        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c1; j++)
                scanf("%d", &A[i][j]);

        printf("\nTranspose:\n");
        for(int i = 0; i < c1; i++) {
            for(int j = 0; j < r1; j++) {
                printf("%d ", A[j][i]);
            }
            printf("\n");
        }
    }

    else {
        printf("Invalid choice.\n");
    }

    return 0;
}