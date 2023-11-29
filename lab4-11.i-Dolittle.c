#include <stdio.h>

void dolittle_lu_decomposition(int n, double matrix[][n], double L[][n], double U[][n]) {
    for (int i = 0; i < n; i++) {
        // Compute U's elements in row i
        for (int j = i; j < n; j++) {
            double sum = 0.0;
            for (int k = 0; k < i; k++) {
                sum += L[i][k] * U[k][j];
            }
            U[i][j] = matrix[i][j] - sum;
        }

        // Compute L's elements in column i
        for (int j = i + 1; j < n; j++) {
            double sum = 0.0;
            for (int k = 0; k < i; k++) {
                sum += L[j][k] * U[k][i];
            }
            L[j][i] = (matrix[j][i] - sum) / U[i][i];
        }
    }
}

int main() {
    int n = 3;
    double A[3][3] = {
        {2, -1, 1},
        {-4, 6, 3},
        {-4, -2, 8}
    };
    double L[3][3];
    double U[3][3];

    dolittle_lu_decomposition(n, A, L, U);

    printf("Matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nLower triangular matrix L:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                printf("0\t");
            } else {
                printf("%.2lf\t", L[i][j]);
            }
        }
        printf("\n");
    }

    printf("\nUpper triangular matrix U:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                printf("0\t");
            } else {
                printf("%.2lf\t", U[i][j]);
            }
        }
        printf("\n");
    }
 printf("\n\nSohan Mijar\n");
    printf("Roll no:21");
    return 0;
}
