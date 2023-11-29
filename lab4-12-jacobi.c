#include <stdio.h>
#include <math.h>

#define N 4
#define MAX_ITER 50
#define EPSILON 1e-6

void jacobiIteration(double A[N][N], double B[N], double X[N]) {
    double temp[N];
    int iteration = 0;

    while (iteration < MAX_ITER) {
        for (int i = 0; i < N; i++) {
            temp[i] = B[i];
            for (int j = 0; j < N; j++) {
                if (i != j) {
                    temp[i] -= A[i][j] * X[j];
                }
            }
            temp[i] /= A[i][i];
        }

        double maxDiff = 0.01;
        for (int i = 0; i < N; i++) {
            double diff = fabs(X[i] - temp[i]);
            if (diff > maxDiff) {
                maxDiff = diff;
            }
            X[i] = temp[i];
        }

        if (maxDiff < EPSILON) {
            break;
        }

        iteration++;
    }
}

int main() {
    double A[N][N] = {
//        {10, -1, 2},
//        {-1, 11, -1},
//        {2, -1, 10}
          {10,-2,-1,-1},
          {-2,10,-1,-1},
          {-1,-1,10,-2},
          {-1,-1,-2,10}
    };

    double B[N] = {3, 15,27,-9};
    double X[N] = {0}; // Initial guess

    jacobiIteration(A, B, X);

    printf("Solution of the Jacobi Iteration method:\n");
    for (int i = 0; i < N; i++) {
        printf("X%d = %.6lf\n", i + 1, X[i]);
    }
        printf("\nSohan Mijar\n");
        printf("Roll no:21");

    return 0;
}
