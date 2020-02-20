#include <stdio.h>
#include <math.h>
#define E 2.71828182845904

double factorial(double n) {
    int i;
    double fact = 1.0;
    for (i = 1; i <= n; ++i) {
            fact *= i;
    }

    return fact;
}

int main (void){
  double num = (1+(E*0.1));

  double series = num - (pow(num,3.0)/factorial(3.0))+(pow(num,5.0)/factorial(5.0))-(pow(num,7.0)/factorial(7.0))+(pow(num,9.0)/factorial(9.0));

  printf("The answer is : %.3f\n", series);
  printf("The real answer is 0.932\n");

  return 0;
}
