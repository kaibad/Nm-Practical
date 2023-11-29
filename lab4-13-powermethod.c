//#include <stdio.h>
//#include <math.h>
//
//#define N 3
//#define MAX_ITER 50
//#define EPSILON 1e-6
//
//void matrixVectorProduct(double A[N][N], double v[N], double result[N]) {
//    for (int i = 0; i < N; i++) {
//        result[i] = 0;
//        for (int j = 0; j < N; j++) {
//            result[i] += A[i][j] * v[j];
//        }
//    }
//}
//
//double vectorNorm(double v[N]) {
//    double sum = 0;
//    for (int i = 0; i < N; i++) {
//        sum += v[i] * v[i];
//    }
//    return sqrt(sum);
//}
//
//void powerMethod(double A[N][N], double *eigenvalue, double eigenvector[N]) {
//    double v[N] = {1, 1, 1}; // Initial guess for eigenvector
//
//    for (int iter = 0; iter < MAX_ITER; iter++) {
//        double w[N];
//        matrixVectorProduct(A, v, w);
//
//        double norm = vectorNorm(w);
//        for (int i = 0; i < N; i++) {
//            v[i] = w[i] / norm;
//        }
//
//        double prevEigenvalue = *eigenvalue;
//        *eigenvalue = 0;
//        for (int i = 0; i < N; i++) {
//            *eigenvalue += v[i] * w[i];
//        }
//
//        if (fabs(*eigenvalue - prevEigenvalue) < EPSILON) {
//            break;
//        }
//    }
//
//    for (int i = 0; i < N; i++) {
//        eigenvector[i] = v[i];
//    }
//}
//
//int main() {
//    double A[N][N] = {
//        {3, -1, 0},
//        {-1, 2, -1},
//        {0, -1, 1}
//    };
//
//    double eigenvalue = 0;
//    double eigenvector[N];
//
//    powerMethod(A, &eigenvalue, eigenvector);
//
//    printf("Dominant Eigenvalue: %.6lf\n", eigenvalue);
//    printf("Corresponding Eigenvector:\n");
//    for (int i = 0; i < N; i++) {
//        printf("%.6lf\n", eigenvector[i]);
//    }
//    printf("\nSohan Mijar\n");
//    printf("Roll no:21");
//
//    return 0;
//}

#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j;
float el, k, E[10],a[10][10],nx[10],x[10], y[10];
printf("Enter Dimension of System of equations\n");
scanf("%d",&n);
printf("Enter coefficients row-wise\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%f",&a[i][j]);
printf("Enter guess vector\n");
for(i=0;i<n;i++)
scanf("%f",&x[i]);
printf("Enter Accuracy Limit\n");
scanf("%f",&el);

while(1)
{
for (i=0; i<n; i++)
y[i]=a[i][0]*x[0]+a[i][1]*x[1]+a[i][2]*x[2];
k=y[0];
for(i=1;i<n;i++)
if(k<y[i])
k=y[i];
for(i=0;i<n;i++)
nx[i]=1/k*y[i];
for(i=0; i<n;i++)
{
E[i]=(nx[i]-x[i])/nx[i];
if(E[i]>el)
break;
}
if(i==n)
{
printf("Largest Eigenvalue is:%f\n",k);
printf("Eigenvector is: \n");
for(i=0;i<n;i++)
printf("%f\t",nx[i]);
break;
}
else
for(i=0;i<n;i++)
x[i]=nx[i];
}
 printf("\nSohan Mijar\n");
    printf("Roll no:21");
return 0;
}




























