#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[5][5], B[5][5];

    printf("Enter rows and columns for Matrix A (max 5x5): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int isSquare = (r1 == c1);
    int isRectangular = (r1 != c1);
    int isRow = (r1 == 1);
    int isCol = (c1 == 1);
    int isZero = 1;
    int isDiagonal = isSquare;
    int isIdentity = isSquare;
    int isScalar = isSquare;
    int isUpperTri = isSquare;
    int isLowerTri = isSquare;
    int isSymmetric = isSquare;
    int isSkewSymmetric = isSquare;
    int isEqual = (r1 == r2 && c1 == c2);

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {

            if (A[i][j] != 0) {
                isZero = 0;
            }

            if (isEqual && A[i][j] != B[i][j]) {
                isEqual = 0;
            }

            if (isSquare) {
                if (i != j) {
                    if (A[i][j] != 0) {
                        isDiagonal = 0;
                        isIdentity = 0;
                        isScalar = 0;
                    }

                    if (A[i][j] != A[j][i]) {
                        isSymmetric = 0;
                    }

                    if (A[i][j] != -A[j][i]) {
                        isSkewSymmetric = 0;
                    }
                } else {
                    if (A[i][j] != 1) {
                        isIdentity = 0;
                    }

                    if (A[i][j] != A[0][0]) {
                        isScalar = 0;
                    }

                    if (A[i][j] != 0) {
                        isSkewSymmetric = 0;
                    }
                }

                if (i > j && A[i][j] != 0) {
                    isUpperTri = 0;
                }

                if (i < j && A[i][j] != 0) {
                    isLowerTri = 0;
                }
            }
        }
    }

    float det = 1.0;

    if (isSquare) {
        float temp[5][5];

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                temp[i][j] = (float)A[i][j];
            }
        }

        for (int i = 0; i < r1; i++) {
            if (temp[i][i] == 0) {
                int swapRow = -1;

                for (int k = i + 1; k < r1; k++) {
                    if (temp[k][i] != 0) {
                        swapRow = k;
                        break;
                    }
                }

                if (swapRow == -1) {
                    det = 0;
                    break;
                }

                for (int j = 0; j < c1; j++) {
                    float t = temp[i][j];
                    temp[i][j] = temp[swapRow][j];
                    temp[swapRow][j] = t;
                }

                det = -det;
            }

            for (int k = i + 1; k < r1; k++) {
                float factor = temp[k][i] / temp[i][i];

                for (int j = i; j < c1; j++) {
                    temp[k][j] -= factor * temp[i][j];
                }
            }
        }

        if (det != 0) {
            for (int i = 0; i < r1; i++) {
                det *= temp[i][i];
            }
        }
    }

    printf("\n--- Matrix Classifications ---\n");

    if (isSquare) {
        printf("1. Square Matrix\n");
    }

    if (isRectangular) {
        printf("2. Rectangular Matrix\n");
    }

    if (isZero) {
        printf("3. Zero Matrix\n");
        printf("15. Null Matrix\n");
    }

    if (isSquare) {
        if (isIdentity) {
            printf("4. Identity Matrix\n");
        }

        if (isDiagonal) {
            printf("5. Diagonal Matrix\n");
        }

        if (isScalar) {
            printf("6. Scalar Matrix\n");
        }

        if (isUpperTri) {
            printf("7. Upper Triangular Matrix\n");
        }

        if (isLowerTri) {
            printf("8. Lower Triangular Matrix\n");
        }

        if (isSymmetric) {
            printf("9. Symmetric Matrix\n");
        }

        if (isSkewSymmetric) {
            printf("10. Skew-Symmetric Matrix\n");
        }

        int finalDet = (int)(det + 0.5);

        if (finalDet == 0) {
            printf("11. Singular Matrix (Determinant = 0)\n");
        } else {
            printf("11. Non-Singular Matrix (Determinant = %d)\n", finalDet);
        }
    }

    if (isEqual) {
        printf("12. Equal Matrix (A matches B)\n");
    }

    if (isRow) {
        printf("13. Row Matrix\n");
    }

    if (isCol) {
        printf("14. Column Matrix\n");
    }

    return 0;
}