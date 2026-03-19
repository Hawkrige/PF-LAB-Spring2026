#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[3][3], B[3][3], C[3][3] = {0};

    
    printf("Enter rows and columns of Matrix A (max 3x3): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B (max 3x3): ");
    scanf("%d %d", &r2, &c2);

    
    if (r1 > 3 || c1 > 3 || r2 > 3 || c2 > 3) {
        printf("Error: Maximum size is 3x3.\n");
        return 0;
    }

    
    if (c1 != r2) {
        printf("Error: Matrix multiplication not possible.\n");
        printf("Columns of A must equal rows of B.\n");
        return 0;
    }

    
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];

        }
    }


    printf("\nMatrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    
    printf("\nMatrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    
    printf("\nResult Matrix (A × B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}