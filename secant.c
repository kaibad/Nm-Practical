#include <stdio.h>
#include <math.h>
#define f(x) (x*x)-5*x+6
#define EPS 0.0001

int main(){
  int iter = 1;
  float x1,x2,x3,e,f1,f2;
  printf("\nInput the two initial guesses:");
  scanf("%f%f",&x1,&x2);

  printf("\nStep\t\t   x1\t\t   f(x1)\t\t   x2\t\t           f(x2)\t\t   x3\t\t          Error\n");

  do{
    f1 = f(x1);
    f2 = f(x2);
    x3 = x2 - ((f2*(x2-x1)) / (f2-f1));
    e = fabs((x3 - x2) / x3);

    printf("%d\t\t%f\t%f\t\t%f\t\t%f\t\t%f\t\t%f\n",iter,x1,f1,x2,f2,x3,e);

   x1 = x2;
    x2 = x3;
    iter++;
  }while(e > EPS);

  printf("\nRoot:%f\n\n\n",x3);
  printf("Name=Smaran Rawal\n");
  printf("Roll number=20");

    return 0;
}

//
//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//#include<stdlib.h>
//
///* Defining equation to be solved.
//   Change this equation to solve another problem. */
//#define    f(x)    x*x - 5*x +6
//
//void main()
//{
//	 float x0, x1, x2, f0, f1, f2, e;
//	 int step = 1, N;
//	// clrscr();
//	 /* Inputs */
//	 printf("\nEnter initial guesses:\n");
//	 scanf("%f%f", &x0, &x1);
//	 printf("Enter tolerable error:\n");
//	 scanf("%f", &e);
//	 printf("Enter maximum iteration:\n");
//	 scanf("%d", &N);
//
//	 /* Implementing Secant Method */
//	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
//	 do
//	 {
//		  f0 = f(x0);
//		  f1 = f(x1);
//		  if(f0 == f1)
//		  {
//			   printf("Mathematical Error.");
//			   exit(0);
//		  }
//
//		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
//		  f2 = f(x2);
//
//		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x2, f2);
//
//		  x0 = x1;
//		  f0 = f1;
//		  x1 = x2;
//		  f1 = f2;
//
//		  step = step + 1;
//
//		  if(step > N)
//		  {
//			   printf("Not Convergent.");
//			   exit(0);
//		  }
//	 }while(fabs(f2)>e);
//
//	 printf("\nRoot is: %f", x2);
//	 getch();
//}
